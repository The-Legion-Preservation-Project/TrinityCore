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

#ifndef TRINITYCORE_RSA_H
#define TRINITYCORE_RSA_H

#include "BigNumber.h"
#include "Define.h"
#include <openssl/evp.h>
#include <openssl/rsa.h>
#include <array>
#include <string>
#include <vector>

namespace Trinity
{
namespace Crypto
{
class TC_COMMON_API RSA
{
public:
    RSA(RSA const& rsa) = delete;
    RSA& operator=(RSA const& rsa) = delete;

    struct PublicKey {};
    struct PrivateKey {};

    struct NoPadding : std::integral_constant<int32, RSA_NO_PADDING> {};
    struct PKCS1Padding : std::integral_constant<int32, RSA_PKCS1_PADDING> {};

    struct SHA256 : std::integral_constant<int32, NID_sha256> {};

    RSA();
    RSA(RSA&& rsa);
    ~RSA();

    template <typename KeyTag>
    bool LoadFromFile(std::string const& fileName, KeyTag);

    template <typename KeyTag>
    bool LoadFromString(std::string const& keyPem, KeyTag);

    uint32 GetOutputSize() const { return uint32(RSA_size(_rsa)); }
    BigNumber GetModulus() const;

    template <typename KeyTag, typename PaddingTag>
    bool Encrypt(uint8 const* data, std::size_t dataLength, uint8* output, KeyTag, PaddingTag)
    {
        return Encrypt<KeyTag>(data, dataLength, output, PaddingTag::value);
    }

    template <typename HashTag>
    bool Sign(uint8 const* dataHash, std::size_t dataHashLength, uint8* output, HashTag)
    {
        return Sign(HashTag::value, dataHash, dataHashLength, output);
    }

private:
    template <typename KeyTag>
    bool Encrypt(uint8 const* data, std::size_t dataLength, uint8* output, int32 paddingType);

    bool Sign(int32 hashType, uint8 const* dataHash, std::size_t dataHashLength, uint8* output);

    ::RSA* _rsa;
};

class TC_COMMON_API RsaSignature
{
public:
    class TC_COMMON_API DigestGenerator
    {
    public:
        virtual ~DigestGenerator() = default;
        virtual EVP_MD const* GetGenerator() const = 0;
        virtual void PostInitCustomizeContext(EVP_MD_CTX* ctx) = 0;
    };

    class TC_COMMON_API SHA256 : public DigestGenerator
    {
    public:
        EVP_MD const* GetGenerator() const override;
        void PostInitCustomizeContext(EVP_MD_CTX* ctx) override;
    };

    class TC_COMMON_API HMAC_SHA256 : public DigestGenerator
    {
    public:
        explicit HMAC_SHA256(uint8 const* key, size_t keyLength) : _key(key), _keyLength(keyLength) { }

        EVP_MD const* GetGenerator() const override;
        void PostInitCustomizeContext(EVP_MD_CTX* ctx) override;

    private:
        uint8 const* _key;
        size_t _keyLength;
    };

    RsaSignature();
    RsaSignature(RsaSignature const& other);
    RsaSignature(RsaSignature&& other) noexcept;
    ~RsaSignature();

    RsaSignature& operator=(RsaSignature const& right);
    RsaSignature& operator=(RsaSignature&& right) noexcept;

    bool LoadKeyFromFile(std::string const& fileName);

    bool LoadKeyFromString(std::string const& keyPem);

    template <std::size_t N>
    bool Sign(std::array<uint8, N> const& message, DigestGenerator& generator, std::vector<uint8>& output)
    {
        return this->Sign(message.data(), message.size(), generator, output);
    }

    bool Sign(uint8 const* message, std::size_t messageLength, DigestGenerator& generator, std::vector<uint8>& output);

private:
    EVP_MD_CTX* _ctx = nullptr;
    EVP_PKEY* _key = nullptr;
};
}
}

#endif // TRINITYCORE_RSA_H
