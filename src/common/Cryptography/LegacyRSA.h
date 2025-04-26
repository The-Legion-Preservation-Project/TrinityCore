#ifndef TRINITYCORE_LEGACY_RSA_H
#define TRINITYCORE_LEGACY_RSA_H

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
class TC_COMMON_API LegacyRSA
{
public:
    LegacyRSA(LegacyRSA const& rsa) = delete;
    LegacyRSA& operator=(LegacyRSA const& rsa) = delete;

    struct NoPadding : std::integral_constant<int32, RSA_NO_PADDING> {};
    struct PKCS1Padding : std::integral_constant<int32, RSA_PKCS1_PADDING> {};

    struct SHA256 : std::integral_constant<int32, NID_sha256> {};

    LegacyRSA();
    LegacyRSA(LegacyRSA&& rsa);
    ~LegacyRSA();

    bool LoadFromFile(std::string const& fileName);

    bool LoadFromString(std::string const& keyPem);

    uint32 GetOutputSize() const;
    BigNumber GetModulus() const;

    template <typename PaddingTag>
    bool Encrypt(uint8 const* data, std::size_t dataLength, uint8* output, PaddingTag)
    {
        return Encrypt(data, dataLength, output, PaddingTag::value);
    }

    template <typename HashTag>
    bool Sign(uint8 const* dataHash, std::size_t dataHashLength, uint8* output, HashTag)
    {
        return Sign(HashTag::value, dataHash, dataHashLength, output);
    }

private:
    bool Encrypt(uint8 const* data, std::size_t dataLength, uint8* output, int32 paddingType);

    bool Sign(int32 hashType, uint8 const* dataHash, std::size_t dataHashLength, uint8* output);

    ::RSA* _rsa;
};
}
}

#endif // TRINITYCORE_RSA_H
