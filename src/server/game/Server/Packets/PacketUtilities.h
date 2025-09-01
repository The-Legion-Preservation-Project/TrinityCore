/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRINITYCORE_PACKET_UTILITIES_H
#define TRINITYCORE_PACKET_UTILITIES_H

#include "ByteBuffer.h"
#include "Duration.h"
#include "Tuples.h"
#include <short_alloc/short_alloc.h>
#include <string_view>
#include <ctime>

namespace WorldPackets
{
    class InvalidStringValueException : public ByteBufferInvalidValueException
    {
    public:
        InvalidStringValueException(std::string_view value);

        std::string const& GetInvalidValue() const { return _value; }

    private:
        std::string _value;
    };

    class InvalidUtf8ValueException : public InvalidStringValueException
    {
    public:
        InvalidUtf8ValueException(std::string_view value);
    };

    class InvalidHyperlinkException : public InvalidStringValueException
    {
    public:
        InvalidHyperlinkException(std::string_view value);
    };

    class IllegalHyperlinkException : public InvalidStringValueException
    {
    public:
        IllegalHyperlinkException(std::string_view value);
    };

    namespace Strings
    {
        struct RawBytes { static bool Validate(std::string_view /*value*/) { return true; } };
        template<std::size_t MaxBytesWithoutNullTerminator>
        struct ByteSize { static bool Validate(std::string_view value) { return value.size() <= MaxBytesWithoutNullTerminator; } };
        struct Utf8 { static bool Validate(std::string_view value); };
        struct Hyperlinks { static bool Validate(std::string_view value); };
        struct NoHyperlinks { static bool Validate(std::string_view value); };
    }

    /**
     * Utility class for automated prevention of invalid strings in client packets
     */
    template<std::size_t MaxBytesWithoutNullTerminator, typename... Validators>
    class String
    {
        using ValidatorList = std::conditional_t<!Trinity::has_type<Strings::RawBytes, std::tuple<Validators...>>::value,
            std::tuple<Strings::ByteSize<MaxBytesWithoutNullTerminator>, Strings::Utf8, Validators...>,
            std::tuple<Strings::ByteSize<MaxBytesWithoutNullTerminator>, Validators...>>;

    public:
        bool empty() const { return _storage.empty(); }
        std::size_t length() const { return _storage.length(); }
        char const* c_str() const { return _storage.c_str(); }

        operator std::string_view() const { return _storage; }
        operator std::string&() { return _storage; }
        operator std::string const&() const { return _storage; }

        std::string&& Move() { return std::move(_storage); }

        friend ByteBuffer& operator>>(ByteBuffer& data, String& value)
        {
            value = data.ReadCString(false);
            return data;
        }

        String& operator=(std::string const& value)
        {
            Validate(value);
            _storage = value;
            return *this;
        }

        String& operator=(std::string&& value)
        {
            Validate(value);
            _storage = std::move(value);
            return *this;
        }

        String& operator=(std::string_view value)
        {
            Validate(value);
            _storage = std::move(value);
            return *this;
        }

        String& operator=(char const* value)
        {
            return *this = std::string_view(value);
        }

        void resize(std::size_t size)
        {
            _storage.resize(size);
        }

    private:
        static bool Validate(std::string_view value)
        {
            return ValidateNth(value, std::make_index_sequence<std::tuple_size_v<ValidatorList>>{});
        }

        template<std::size_t... indexes>
        static bool ValidateNth(std::string_view value, std::index_sequence<indexes...>)
        {
            return (std::tuple_element_t<indexes, ValidatorList>::Validate(value) && ...);
        }

        std::string _storage;
    };

    class PacketArrayMaxCapacityException : public ByteBufferException
    {
    public:
        PacketArrayMaxCapacityException(std::size_t requestedSize, std::size_t sizeLimit);
    };

    [[noreturn]] void OnInvalidArraySize(std::size_t requestedSize, std::size_t sizeLimit);

    template <typename T, std::size_t N, bool IsLarge>
    struct ArrayAllocatorTraits
    {
        using allocator_type = short_alloc::short_alloc<T, (N * sizeof(T) + (alignof(std::max_align_t) - 1)) & ~(alignof(std::max_align_t) - 1)>;
        using resource_type = typename allocator_type::arena_type;
    };

    // don't store elements inline when size is large
    template <typename T, std::size_t N>
    struct ArrayAllocatorTraits<T, N, true>
    {
        using allocator_type = std::allocator<T>;
        using resource_type = std::allocator<T>;
    };

    /**
     * Utility class for automated prevention of loop counter spoofing in client packets
     */
    template<typename T, std::size_t N>
    class Array
    {
    public:
        using allocator_traits = ArrayAllocatorTraits<T, N, (sizeof(T) * N > 0x1000)>;
        using allocator_type = typename allocator_traits::allocator_type;
        using allocator_resource_type = typename allocator_traits::resource_type;

        using storage_type = std::vector<T, allocator_type>;

        using max_capacity = std::integral_constant<std::size_t, N>;

        using value_type = typename storage_type::value_type;
        using size_type = typename storage_type::size_type;
        using pointer = typename storage_type::pointer;
        using const_pointer = typename storage_type::const_pointer;
        using reference = typename storage_type::reference;
        using const_reference = typename storage_type::const_reference;
        using iterator = typename storage_type::iterator;
        using const_iterator = typename storage_type::const_iterator;

        Array() : _storage(_allocatorResource) { }

        Array(Array const& other) : Array()
        {
            for (T const& element : other)
                _storage.push_back(element);
        }

        Array(Array&& other) noexcept = delete;

        Array& operator=(Array const& other)
        {
            if (this == &other)
                return *this;

            _storage.clear();
            for (T const& element : other)
                _storage.push_back(element);

            return *this;
        }

        Array& operator=(Array&& other) noexcept = delete;

        ~Array() = default;

        iterator begin() { return _storage.begin(); }
        const_iterator begin() const { return _storage.begin(); }

        iterator end() { return _storage.end(); }
        const_iterator end() const { return _storage.end(); }

        pointer data() { return _storage.data(); }
        const_pointer data() const { return _storage.data(); }

        size_type size() const { return _storage.size(); }
        bool empty() const { return _storage.empty(); }

        reference operator[](size_type i) { return _storage[i]; }
        const_reference operator[](size_type i) const { return _storage[i]; }

        void resize(size_type newSize)
        {
            if (newSize > max_capacity::value)
                OnInvalidArraySize(newSize, max_capacity::value);

            _storage.resize(newSize);
        }

        void push_back(value_type const& value)
        {
            if (_storage.size() >= max_capacity::value)
                OnInvalidArraySize(_storage.size() + 1, max_capacity::value);

            _storage.push_back(value);
        }

        void push_back(value_type&& value)
        {
            if (_storage.size() >= max_capacity::value)
                OnInvalidArraySize(_storage.size() + 1, max_capacity::value);

            _storage.push_back(std::forward<value_type>(value));
        }

        template<typename... Args>
        T& emplace_back(Args&&... args)
        {
            _storage.emplace_back(std::forward<Args>(args)...);
            return _storage.back();
        }

        iterator erase(const_iterator first, const_iterator last)
        {
            return _storage.erase(first, last);
        }

        void clear()
        {
            _storage.clear();
        }

    private:
        allocator_resource_type _allocatorResource;
        storage_type _storage;
    };

    void CheckCompactArrayMaskOverflow(std::size_t index, std::size_t limit);

    template <typename T>
    class CompactArray
    {
    public:
        CompactArray() : _mask(0) { }

        CompactArray(CompactArray const& right)
            : _mask(right._mask), _contents(right._contents) { }

        CompactArray(CompactArray&& right)
            : _mask(right._mask), _contents(std::move(right._contents))
        {
            right._mask = 0;
        }

        CompactArray& operator=(CompactArray const& right)
        {
            _mask = right._mask;
            _contents = right._contents;
            return *this;
        }

        CompactArray& operator=(CompactArray&& right)
        {
            _mask = right._mask;
            right._mask = 0;
            _contents = std::move(right._contents);
            return *this;
        }

        uint32 GetMask() const { return _mask; }
        T const& operator[](std::size_t index) const { return _contents[index]; }
        std::size_t GetSize() const { return _contents.size(); }

        void Insert(std::size_t index, T const& value)
        {
            CheckCompactArrayMaskOverflow(index, sizeof(_mask) * 8);

            _mask |= 1 << index;
            if (_contents.size() <= index)
                _contents.resize(index + 1);
            _contents[index] = value;
        }

        void Clear()
        {
            _mask = 0;
            _contents.clear();
        }

        bool operator==(CompactArray const& r) const
        {
            if (_mask != r._mask)
                return false;

            return _contents == r._contents;
        }

        bool operator!=(CompactArray const& r) const { return !(*this == r); }

    private:
        uint32 _mask;
        std::vector<T> _contents;
    };

    template <typename T>
    ByteBuffer& operator<<(ByteBuffer& data, CompactArray<T> const& v)
    {
        uint32 mask = v.GetMask();
        data << uint32(mask);
        for (std::size_t i = 0; i < v.GetSize(); ++i)
            if (mask & (1 << i))
                data << v[i];

        return data;
    }

    template <typename T>
    ByteBuffer& operator>>(ByteBuffer& data, CompactArray<T>& v)
    {
        uint32 mask;
        data >> mask;

        for (std::size_t index = 0; mask != 0; mask >>= 1, ++index)
            if ((mask & 1) != 0)
                v.Insert(index, data.read<T>());

        return data;
    }

    template<typename Underlying = uint32>
    class Timestamp
    {
    public:
        Timestamp() = default;
        Timestamp(time_t value) : _value(value) { }
        Timestamp(SystemTimePoint const& systemTime) : _value(std::chrono::system_clock::to_time_t(systemTime)) { }

        Timestamp& operator=(time_t value)
        {
            _value = value;
            return *this;
        }

        Timestamp& operator=(SystemTimePoint const& systemTime)
        {
            _value = std::chrono::system_clock::to_time_t(systemTime);
            return *this;
        }

        operator time_t() const
        {
            return _value;
        }

        Underlying AsUnderlyingType() const
        {
            return static_cast<Underlying>(_value);
        }

        friend ByteBuffer& operator<<(ByteBuffer& data, Timestamp timestamp)
        {
            data << static_cast<Underlying>(timestamp._value);
            return data;
        }

        friend ByteBuffer& operator>>(ByteBuffer& data, Timestamp& timestamp)
        {
            timestamp._value = static_cast<time_t>(data.read<Underlying>());
            return data;
        }

    private:
        time_t _value = time_t(0);
    };

    template<typename ChronoDuration, typename Underlying = uint32>
    class Duration
    {
    public:
        Duration() = default;
        Duration(ChronoDuration value) : _value(value) { }

        Duration& operator=(ChronoDuration value)
        {
            _value = value;
            return *this;
        }

        operator ChronoDuration() const
        {
            return _value;
        }

        friend ByteBuffer& operator<<(ByteBuffer& data, Duration duration)
        {
            data << static_cast<Underlying>(duration._value.count());
            return data;
        }

        friend ByteBuffer& operator>>(ByteBuffer& data, Duration& duration)
        {
            duration._value = ChronoDuration(data.read<Underlying>());
            return data;
        }

    private:
        ChronoDuration _value = ChronoDuration::zero();
    };
}

#endif // TRINITYCORE_PACKET_UTILITIES_H
