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

    struct PublicKey {};
    struct PrivateKey {};

    struct NoPadding : std::integral_constant<int32, RSA_NO_PADDING> {};

    RsaSignature();
    RsaSignature(RsaSignature&& rsa) noexcept;
    ~RsaSignature();

    RsaSignature(RsaSignature const& rsa) = delete;
    RsaSignature& operator=(RsaSignature const& rsa) = delete;

    bool LoadKeyFromFile(std::string const& fileName);

    bool LoadKeyFromString(std::string const& keyPem);

    // TheLegionPreservationProject
    uint32 GetOutputSize() const { return uint32(RSA_size(_rsa)); }

    template <std::size_t N>
    bool Sign(std::array<uint8, N> const& message, DigestGenerator& generator, std::vector<uint8>& output)
    {
        return this->Sign(message.data(), message.size(), generator, output);
    }

    bool Sign(uint8 const* message, std::size_t messageLength, DigestGenerator& generator, std::vector<uint8>& output);

    // TheLegionPreservationProject
    template <typename KeyTag, typename PaddingTag>
    bool Encrypt(uint8 const* data, std::size_t dataLength, uint8* output, KeyTag, PaddingTag)
    {
        return Encrypt<KeyTag>(data, dataLength, output, PaddingTag::value);
    }

private:
    // TheLegionPreservationProject
    template <typename KeyTag>
    bool Encrypt(uint8 const* data, std::size_t dataLength, uint8* output, int32 paddingType);

    EVP_MD_CTX* _ctx = nullptr;
    EVP_PKEY* _key = nullptr;

    // TheLegionPreservationProject
    ::RSA* _rsa;
};
}
}

#endif // TRINITYCORE_RSA_H
