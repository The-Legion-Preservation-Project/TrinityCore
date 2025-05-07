#include "LegacyRSA.h"
#include "HMAC.h"
#include <openssl/pem.h>
#include <algorithm>
#include <memory>
#include <vector>
#include <cstring>
#include <boost/iterator/reverse_iterator.hpp>

namespace
{
    struct BIODeleter
    {
        void operator()(BIO* bio)
        {
            BIO_free(bio);
        }
    };
}

#if TRINITY_COMPILER == TRINITY_COMPILER_GNU
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

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

bool LegacyRSA::LoadFromFile(std::string const& fileName)
{
    std::unique_ptr<BIO, BIODeleter> keyBIO(BIO_new_file(fileName.c_str(), "r"));
    if (!keyBIO)
        return false;

    if (!PEM_read_bio_RSAPrivateKey(keyBIO.get(), &_rsa, nullptr, nullptr))
        return false;

    return true;
}

bool LegacyRSA::LoadFromString(std::string const& keyPem)
{
    std::unique_ptr<BIO, BIODeleter> keyBIO(BIO_new_mem_buf(const_cast<char*>(keyPem.c_str()), keyPem.length() + 1));
    if (!keyBIO)
        return false;

    if (!PEM_read_bio_RSAPrivateKey(keyBIO.get(), &_rsa, nullptr, nullptr))
        return false;

    return true;
}

uint32 LegacyRSA::GetOutputSize() const
{
    return uint32(RSA_size(_rsa));
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

bool LegacyRSA::Encrypt(uint8 const* data, std::size_t dataLength, uint8* output, int32 paddingType)
{
    std::vector<uint8> inputData(boost::make_reverse_iterator(data + dataLength), boost::make_reverse_iterator(data));
    int result = RSA_private_encrypt(inputData.size(), inputData.data(), output, _rsa, paddingType);
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
}

#if TRINITY_COMPILER == TRINITY_COMPILER_GNU
#pragma GCC diagnostic pop
#else
#pragma warning(pop)
#endif
