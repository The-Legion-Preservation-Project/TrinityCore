#include "LegacyRSA.h"
#include "HMAC.h"
#include <openssl/pem.h>
#include <algorithm>
#include <memory>
#include <vector>
#include <cstring>
#include <boost/iterator/reverse_iterator.hpp>

#define CHECK_AND_DECLARE_FUNCTION_TYPE(name, publicKey, privateKey)                                        \
    static_assert(std::is_same<decltype(&publicKey), decltype(&privateKey)>::value,                         \
        "Public key and private key functions must have the same signature");                               \
    using name ## _t = decltype(&publicKey);                                                                \
    template <typename KeyTag> inline name ## _t get_ ## name () { return nullptr; }                        \
    template <> inline name ## _t get_ ## name<Trinity::Crypto::LegacyRSA::PublicKey>() { return &publicKey; }    \
    template <> inline name ## _t get_ ## name<Trinity::Crypto::LegacyRSA::PrivateKey>() { return &privateKey; }

namespace
{
    struct BIODeleter
    {
        void operator()(BIO* bio)
        {
            BIO_free(bio);
        }
    };

    CHECK_AND_DECLARE_FUNCTION_TYPE(PEM_read, PEM_read_bio_RSAPublicKey, PEM_read_bio_RSAPrivateKey);
    CHECK_AND_DECLARE_FUNCTION_TYPE(RSA_encrypt, RSA_public_encrypt, RSA_private_encrypt);
}

namespace Trinity::Crypto
{
LegacyRSA::LegacyRSA()
{
    _rsa = RSA_new();
}

LegacyRSA::LegacyRSA(LegacyRSA&& rsa)
{
    _rsa = rsa._rsa;
    rsa._rsa = RSA_new();
}

LegacyRSA::~LegacyRSA()
{
    RSA_free(_rsa);
}

template <typename KeyTag>
bool LegacyRSA::LoadFromFile(std::string const& fileName, KeyTag)
{
    std::unique_ptr<BIO, BIODeleter> keyBIO(BIO_new_file(fileName.c_str(), "r"));
    if (!keyBIO)
        return false;

    if (!get_PEM_read<KeyTag>()(keyBIO.get(), &_rsa, nullptr, nullptr))
        return false;

    return true;
}

template <typename KeyTag>
bool LegacyRSA::LoadFromString(std::string const& keyPem, KeyTag)
{
    std::unique_ptr<BIO, BIODeleter> keyBIO(BIO_new_mem_buf(const_cast<char*>(keyPem.c_str()), keyPem.length() + 1));
    if (!keyBIO)
        return false;

    if (!get_PEM_read<KeyTag>()(keyBIO.get(), &_rsa, nullptr, nullptr))
        return false;

    return true;
}

BigNumber LegacyRSA::GetModulus() const
{
    BigNumber bn;
#if defined(OPENSSL_VERSION_NUMBER) && OPENSSL_VERSION_NUMBER >= 0x10100000L
    const BIGNUM* rsa_n;
    RSA_get0_key(_rsa, &rsa_n, nullptr, nullptr);
    BN_copy(bn.BN(), rsa_n);
#else
    BN_copy(bn.BN(), _rsa->n);
#endif
    return bn;
}

template <typename KeyTag>
bool LegacyRSA::Encrypt(uint8 const* data, std::size_t dataLength, uint8* output, int32 paddingType)
{
    std::vector<uint8> inputData(boost::make_reverse_iterator(data + dataLength), boost::make_reverse_iterator(data));
    int result = get_RSA_encrypt<KeyTag>()(inputData.size(), inputData.data(), output, _rsa, paddingType);
    std::reverse(output, output + GetOutputSize());
    return result != -1;
}

bool LegacyRSA::Sign(int32 hashType, uint8 const* dataHash, std::size_t dataHashLength, uint8* output)
{
    uint32 signatureLength = 0;
    auto result = RSA_sign(hashType, dataHash, dataHashLength, output, &signatureLength, _rsa);
    std::reverse(output, output + GetOutputSize());
    return result != -1;
}

template TC_COMMON_API bool LegacyRSA::LoadFromFile(std::string const& fileName, LegacyRSA::PublicKey);
template TC_COMMON_API bool LegacyRSA::LoadFromFile(std::string const& fileName, LegacyRSA::PrivateKey);
template TC_COMMON_API bool LegacyRSA::LoadFromString(std::string const& keyPem, LegacyRSA::PublicKey);
template TC_COMMON_API bool LegacyRSA::LoadFromString(std::string const& keyPem, LegacyRSA::PrivateKey);
template TC_COMMON_API bool LegacyRSA::Encrypt<LegacyRSA::PublicKey>(uint8 const* data, std::size_t dataLength, uint8* output, int32 paddingType);
template TC_COMMON_API bool LegacyRSA::Encrypt<LegacyRSA::PrivateKey>(uint8 const* data, std::size_t dataLength, uint8* output, int32 paddingType);
}