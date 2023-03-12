/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright(c) 2007-2022 Intel Corporation */
/* $NQC$ */
#ifndef _ICP_QAT_HW_H_
#define _ICP_QAT_HW_H_

enum icp_qat_hw_ae_id {
	ICP_QAT_HW_AE_0 = 0,
	ICP_QAT_HW_AE_1 = 1,
	ICP_QAT_HW_AE_2 = 2,
	ICP_QAT_HW_AE_3 = 3,
	ICP_QAT_HW_AE_4 = 4,
	ICP_QAT_HW_AE_5 = 5,
	ICP_QAT_HW_AE_6 = 6,
	ICP_QAT_HW_AE_7 = 7,
	ICP_QAT_HW_AE_8 = 8,
	ICP_QAT_HW_AE_9 = 9,
	ICP_QAT_HW_AE_10 = 10,
	ICP_QAT_HW_AE_11 = 11,
	ICP_QAT_HW_AE_DELIMITER = 12
};

enum icp_qat_hw_qat_id {
	ICP_QAT_HW_QAT_0 = 0,
	ICP_QAT_HW_QAT_1 = 1,
	ICP_QAT_HW_QAT_2 = 2,
	ICP_QAT_HW_QAT_3 = 3,
	ICP_QAT_HW_QAT_4 = 4,
	ICP_QAT_HW_QAT_5 = 5,
	ICP_QAT_HW_QAT_DELIMITER = 6
};

enum icp_qat_hw_auth_algo {
	ICP_QAT_HW_AUTH_ALGO_NULL = 0,
	ICP_QAT_HW_AUTH_ALGO_SHA1 = 1,
	ICP_QAT_HW_AUTH_ALGO_MD5 = 2,
	ICP_QAT_HW_AUTH_ALGO_SHA224 = 3,
	ICP_QAT_HW_AUTH_ALGO_SHA256 = 4,
	ICP_QAT_HW_AUTH_ALGO_SHA384 = 5,
	ICP_QAT_HW_AUTH_ALGO_SHA512 = 6,
	ICP_QAT_HW_AUTH_ALGO_AES_XCBC_MAC = 7,
	ICP_QAT_HW_AUTH_ALGO_AES_CBC_MAC = 8,
	ICP_QAT_HW_AUTH_ALGO_AES_F9 = 9,
	ICP_QAT_HW_AUTH_ALGO_GALOIS_128 = 10,
	ICP_QAT_HW_AUTH_ALGO_GALOIS_64 = 11,
	ICP_QAT_HW_AUTH_ALGO_KASUMI_F9 = 12,
	ICP_QAT_HW_AUTH_ALGO_SNOW_3G_UIA2 = 13,
	ICP_QAT_HW_AUTH_ALGO_ZUC_3G_128_EIA3 = 14,
	ICP_QAT_HW_AUTH_RESERVED_1 = 15,
	ICP_QAT_HW_AUTH_RESERVED_2 = 16,
	ICP_QAT_HW_AUTH_ALGO_SHA3_256 = 17,
	ICP_QAT_HW_AUTH_RESERVED_3 = 18,
	ICP_QAT_HW_AUTH_ALGO_SHA3_512 = 19,
	ICP_QAT_HW_AUTH_ALGO_DELIMITER = 20
};

enum icp_qat_hw_auth_mode {
	ICP_QAT_HW_AUTH_MODE0 = 0,
	ICP_QAT_HW_AUTH_MODE1 = 1,
	ICP_QAT_HW_AUTH_MODE2 = 2,
	ICP_QAT_HW_AUTH_MODE_DELIMITER = 3
};

struct icp_qat_hw_auth_config {
	uint32_t config;
	uint32_t reserved;
};
enum icp_qat_slice_mask {
	ICP_ACCEL_MASK_CIPHER_SLICE = 0x01,
	ICP_ACCEL_MASK_AUTH_SLICE = 0x02,
	ICP_ACCEL_MASK_PKE_SLICE = 0x04,
	ICP_ACCEL_MASK_COMPRESS_SLICE = 0x08,
	ICP_ACCEL_MASK_DEPRECATED = 0x10,
	ICP_ACCEL_MASK_EIA3_SLICE = 0x20,
	ICP_ACCEL_MASK_SHA3_SLICE = 0x40,
	ICP_ACCEL_MASK_CRYPTO0_SLICE = 0x80,
	ICP_ACCEL_MASK_CRYPTO1_SLICE = 0x100,
	ICP_ACCEL_MASK_CRYPTO2_SLICE = 0x200,
	ICP_ACCEL_MASK_SM3_SLICE = 0x400,
	ICP_ACCEL_MASK_SM4_SLICE = 0x800
};

enum icp_qat_capabilities_mask {
	ICP_ACCEL_CAPABILITIES_CRYPTO_SYMMETRIC = BIT(0),
	ICP_ACCEL_CAPABILITIES_CRYPTO_ASYMMETRIC = BIT(1),
	ICP_ACCEL_CAPABILITIES_CIPHER = BIT(2),
	ICP_ACCEL_CAPABILITIES_AUTHENTICATION = BIT(3),
	ICP_ACCEL_CAPABILITIES_RESERVED_1 = BIT(4),
	ICP_ACCEL_CAPABILITIES_COMPRESSION = BIT(5),
	ICP_ACCEL_CAPABILITIES_DEPRECATED = BIT(6),
	ICP_ACCEL_CAPABILITIES_RAND = BIT(7),
	ICP_ACCEL_CAPABILITIES_ZUC = BIT(8),
	ICP_ACCEL_CAPABILITIES_SHA3 = BIT(9),
	ICP_ACCEL_CAPABILITIES_KPT = BIT(10),
	ICP_ACCEL_CAPABILITIES_RL = BIT(11),
	ICP_ACCEL_CAPABILITIES_HKDF = BIT(12),
	ICP_ACCEL_CAPABILITIES_ECEDMONT = BIT(13),
	ICP_ACCEL_CAPABILITIES_EXT_ALGCHAIN = BIT(14),
	ICP_ACCEL_CAPABILITIES_SHA3_EXT = BIT(15),
	ICP_ACCEL_CAPABILITIES_AESGCM_SPC = BIT(16),
	ICP_ACCEL_CAPABILITIES_CHACHA_POLY = BIT(17),
	ICP_ACCEL_CAPABILITIES_SM2 = BIT(18),
	ICP_ACCEL_CAPABILITIES_SM3 = BIT(19),
	ICP_ACCEL_CAPABILITIES_SM4 = BIT(20),
	ICP_ACCEL_CAPABILITIES_INLINE = BIT(21),
	ICP_ACCEL_CAPABILITIES_CNV_INTEGRITY = BIT(22),
	ICP_ACCEL_CAPABILITIES_CNV_INTEGRITY64 = BIT(23),
	ICP_ACCEL_CAPABILITIES_LZ4_COMPRESSION = BIT(24),
	ICP_ACCEL_CAPABILITIES_LZ4S_COMPRESSION = BIT(25),
	ICP_ACCEL_CAPABILITIES_AES_V2 = BIT(26),
	ICP_ACCEL_CAPABILITIES_KPT2 = BIT(27),
};

enum icp_qat_extended_dc_capabilities_mask {
	ICP_ACCEL_CAPABILITIES_ADVANCED_COMPRESSION = 0x101
};

#define QAT_AUTH_MODE_BITPOS 4
#define QAT_AUTH_MODE_MASK 0xF
#define QAT_AUTH_ALGO_BITPOS 0
#define QAT_AUTH_ALGO_MASK 0xF
#define QAT_AUTH_CMP_BITPOS 8
#define QAT_AUTH_HIGH_BIT 4
#define QAT_AUTH_CMP_MASK 0x7F
#define QAT_AUTH_SHA3_PADDING_BITPOS 16
#define QAT_AUTH_SHA3_PADDING_MASK 0x1
#define QAT_AUTH_ALGO_SHA3_BITPOS 22
#define QAT_AUTH_ALGO_SHA3_MASK 0x3
#define ICP_QAT_HW_AUTH_CONFIG_BUILD(mode, algo, cmp_len)                      \
	(((mode & QAT_AUTH_MODE_MASK) << QAT_AUTH_MODE_BITPOS) |               \
	 ((algo & QAT_AUTH_ALGO_MASK) << QAT_AUTH_ALGO_BITPOS) |               \
	 (((algo >> 4) & QAT_AUTH_ALGO_SHA3_MASK)                              \
	  << QAT_AUTH_ALGO_SHA3_BITPOS) |                                      \
	 (((((algo == ICP_QAT_HW_AUTH_ALGO_SHA3_256) ||                        \
	     (algo == ICP_QAT_HW_AUTH_ALGO_SHA3_512)) ?                        \
		1 :                                                            \
		0) &                                                           \
	   QAT_AUTH_SHA3_PADDING_MASK)                                         \
	  << QAT_AUTH_SHA3_PADDING_BITPOS) |                                   \
	 ((cmp_len & QAT_AUTH_CMP_MASK) << QAT_AUTH_CMP_BITPOS))

struct icp_qat_hw_auth_counter {
	__be32 counter;
	uint32_t reserved;
};

#define QAT_AUTH_COUNT_MASK 0xFFFFFFFF
#define QAT_AUTH_COUNT_BITPOS 0
#define ICP_QAT_HW_AUTH_COUNT_BUILD(val)                                       \
	(((val)&QAT_AUTH_COUNT_MASK) << QAT_AUTH_COUNT_BITPOS)

struct icp_qat_hw_auth_setup {
	struct icp_qat_hw_auth_config auth_config;
	struct icp_qat_hw_auth_counter auth_counter;
};

#define QAT_HW_DEFAULT_ALIGNMENT 8
#define QAT_HW_ROUND_UP(val, n) (((val) + ((n)-1)) & (~(n - 1)))
#define ICP_QAT_HW_NULL_STATE1_SZ 32
#define ICP_QAT_HW_MD5_STATE1_SZ 16
#define ICP_QAT_HW_SHA1_STATE1_SZ 20
#define ICP_QAT_HW_SHA224_STATE1_SZ 32
#define ICP_QAT_HW_SHA256_STATE1_SZ 32
#define ICP_QAT_HW_SHA3_256_STATE1_SZ 32
#define ICP_QAT_HW_SHA384_STATE1_SZ 64
#define ICP_QAT_HW_SHA512_STATE1_SZ 64
#define ICP_QAT_HW_SHA3_512_STATE1_SZ 64
#define ICP_QAT_HW_SHA3_224_STATE1_SZ 28
#define ICP_QAT_HW_SHA3_384_STATE1_SZ 48
#define ICP_QAT_HW_AES_XCBC_MAC_STATE1_SZ 16
#define ICP_QAT_HW_AES_CBC_MAC_STATE1_SZ 16
#define ICP_QAT_HW_AES_F9_STATE1_SZ 32
#define ICP_QAT_HW_KASUMI_F9_STATE1_SZ 16
#define ICP_QAT_HW_GALOIS_128_STATE1_SZ 16
#define ICP_QAT_HW_SNOW_3G_UIA2_STATE1_SZ 8
#define ICP_QAT_HW_ZUC_3G_EIA3_STATE1_SZ 8
#define ICP_QAT_HW_NULL_STATE2_SZ 32
#define ICP_QAT_HW_MD5_STATE2_SZ 16
#define ICP_QAT_HW_SHA1_STATE2_SZ 20
#define ICP_QAT_HW_SHA224_STATE2_SZ 32
#define ICP_QAT_HW_SHA256_STATE2_SZ 32
#define ICP_QAT_HW_SHA3_256_STATE2_SZ 0
#define ICP_QAT_HW_SHA384_STATE2_SZ 64
#define ICP_QAT_HW_SHA512_STATE2_SZ 64
#define ICP_QAT_HW_SHA3_512_STATE2_SZ 0
#define ICP_QAT_HW_SHA3_224_STATE2_SZ 0
#define ICP_QAT_HW_SHA3_384_STATE2_SZ 0
#define ICP_QAT_HW_AES_XCBC_MAC_KEY_SZ 16
#define ICP_QAT_HW_AES_CBC_MAC_KEY_SZ 16
#define ICP_QAT_HW_AES_CCM_CBC_E_CTR0_SZ 16
#define ICP_QAT_HW_F9_IK_SZ 16
#define ICP_QAT_HW_F9_FK_SZ 16
#define ICP_QAT_HW_KASUMI_F9_STATE2_SZ                                         \
	(ICP_QAT_HW_F9_IK_SZ + ICP_QAT_HW_F9_FK_SZ)
#define ICP_QAT_HW_AES_F9_STATE2_SZ ICP_QAT_HW_KASUMI_F9_STATE2_SZ
#define ICP_QAT_HW_SNOW_3G_UIA2_STATE2_SZ 24
#define ICP_QAT_HW_ZUC_3G_EIA3_STATE2_SZ 32
#define ICP_QAT_HW_GALOIS_H_SZ 16
#define ICP_QAT_HW_GALOIS_LEN_A_SZ 8
#define ICP_QAT_HW_GALOIS_E_CTR0_SZ 16

struct icp_qat_hw_auth_sha512 {
	struct icp_qat_hw_auth_setup inner_setup;
	uint8_t state1[ICP_QAT_HW_SHA512_STATE1_SZ];
	struct icp_qat_hw_auth_setup outer_setup;
	uint8_t state2[ICP_QAT_HW_SHA512_STATE2_SZ];
};

struct icp_qat_hw_auth_algo_blk {
	struct icp_qat_hw_auth_sha512 sha;
};

#define ICP_QAT_HW_GALOIS_LEN_A_BITPOS 0
#define ICP_QAT_HW_GALOIS_LEN_A_MASK 0xFFFFFFFF

enum icp_qat_hw_cipher_algo {
	ICP_QAT_HW_CIPHER_ALGO_NULL = 0,
	ICP_QAT_HW_CIPHER_ALGO_DES = 1,
	ICP_QAT_HW_CIPHER_ALGO_3DES = 2,
	ICP_QAT_HW_CIPHER_ALGO_AES128 = 3,
	ICP_QAT_HW_CIPHER_ALGO_AES192 = 4,
	ICP_QAT_HW_CIPHER_ALGO_AES256 = 5,
	ICP_QAT_HW_CIPHER_ALGO_ARC4 = 6,
	ICP_QAT_HW_CIPHER_ALGO_KASUMI = 7,
	ICP_QAT_HW_CIPHER_ALGO_SNOW_3G_UEA2 = 8,
	ICP_QAT_HW_CIPHER_ALGO_ZUC_3G_128_EEA3 = 9,
	ICP_QAT_HW_CIPHER_ALGO_SM4 = 10,
	ICP_QAT_HW_CIPHER_ALGO_CHACHA20_POLY1305 = 11,
	ICP_QAT_HW_CIPHER_DELIMITER = 12
};

enum icp_qat_hw_cipher_mode {
	ICP_QAT_HW_CIPHER_ECB_MODE = 0,
	ICP_QAT_HW_CIPHER_CBC_MODE = 1,
	ICP_QAT_HW_CIPHER_CTR_MODE = 2,
	ICP_QAT_HW_CIPHER_F8_MODE = 3,
	ICP_QAT_HW_CIPHER_AEAD_MODE = 4,
	ICP_QAT_HW_CIPHER_RESERVED_MODE = 5,
	ICP_QAT_HW_CIPHER_XTS_MODE = 6,
	ICP_QAT_HW_CIPHER_MODE_DELIMITER = 7
};

struct icp_qat_hw_cipher_config {
	uint32_t val;
	uint32_t reserved;
};

enum icp_qat_hw_cipher_dir {
	ICP_QAT_HW_CIPHER_ENCRYPT = 0,
	ICP_QAT_HW_CIPHER_DECRYPT = 1,
};

enum icp_qat_hw_cipher_convert {
	ICP_QAT_HW_CIPHER_NO_CONVERT = 0,
	ICP_QAT_HW_CIPHER_KEY_CONVERT = 1,
};

#define QAT_CIPHER_MODE_BITPOS 4
#define QAT_CIPHER_MODE_MASK 0xF
#define QAT_CIPHER_ALGO_BITPOS 0
#define QAT_CIPHER_ALGO_MASK 0xF
#define QAT_CIPHER_CONVERT_BITPOS 9
#define QAT_CIPHER_CONVERT_MASK 0x1
#define QAT_CIPHER_DIR_BITPOS 8
#define QAT_CIPHER_DIR_MASK 0x1
#define QAT_CIPHER_AEAD_HASH_CMP_LEN_MASK 0x1F
#define QAT_CIPHER_AEAD_HASH_CMP_LEN_BITPOS 10
#define QAT_CIPHER_AEAD_AAD_SIZE_LOWER_MASK 0xFF
#define QAT_CIPHER_AEAD_AAD_SIZE_UPPER_MASK 0x3F
#define QAT_CIPHER_AEAD_AAD_UPPER_SHIFT 8
#define QAT_CIPHER_AEAD_AAD_LOWER_SHIFT 24
#define QAT_CIPHER_AEAD_AAD_SIZE_BITPOS 16
#define QAT_CIPHER_MODE_F8_KEY_SZ_MULT 2
#define QAT_CIPHER_MODE_XTS_KEY_SZ_MULT 2
#define ICP_QAT_HW_CIPHER_CONFIG_BUILD(mode, algo, convert, dir)               \
	(((mode & QAT_CIPHER_MODE_MASK) << QAT_CIPHER_MODE_BITPOS) |           \
	 ((algo & QAT_CIPHER_ALGO_MASK) << QAT_CIPHER_ALGO_BITPOS) |           \
	 ((convert & QAT_CIPHER_CONVERT_MASK) << QAT_CIPHER_CONVERT_BITPOS) |  \
	 ((dir & QAT_CIPHER_DIR_MASK) << QAT_CIPHER_DIR_BITPOS))
#define ICP_QAT_HW_DES_BLK_SZ 8
#define ICP_QAT_HW_3DES_BLK_SZ 8
#define ICP_QAT_HW_NULL_BLK_SZ 8
#define ICP_QAT_HW_AES_BLK_SZ 16
#define ICP_QAT_HW_KASUMI_BLK_SZ 8
#define ICP_QAT_HW_SNOW_3G_BLK_SZ 8
#define ICP_QAT_HW_ZUC_3G_BLK_SZ 8
#define ICP_QAT_HW_NULL_KEY_SZ 256
#define ICP_QAT_HW_DES_KEY_SZ 8
#define ICP_QAT_HW_3DES_KEY_SZ 24
#define ICP_QAT_HW_AES_128_KEY_SZ 16
#define ICP_QAT_HW_AES_192_KEY_SZ 24
#define ICP_QAT_HW_AES_256_KEY_SZ 32
#define ICP_QAT_HW_AES_128_F8_KEY_SZ                                           \
	(ICP_QAT_HW_AES_128_KEY_SZ * QAT_CIPHER_MODE_F8_KEY_SZ_MULT)
#define ICP_QAT_HW_AES_192_F8_KEY_SZ                                           \
	(ICP_QAT_HW_AES_192_KEY_SZ * QAT_CIPHER_MODE_F8_KEY_SZ_MULT)
#define ICP_QAT_HW_AES_256_F8_KEY_SZ                                           \
	(ICP_QAT_HW_AES_256_KEY_SZ * QAT_CIPHER_MODE_F8_KEY_SZ_MULT)
#define ICP_QAT_HW_AES_128_XTS_KEY_SZ                                          \
	(ICP_QAT_HW_AES_128_KEY_SZ * QAT_CIPHER_MODE_XTS_KEY_SZ_MULT)
#define ICP_QAT_HW_AES_256_XTS_KEY_SZ                                          \
	(ICP_QAT_HW_AES_256_KEY_SZ * QAT_CIPHER_MODE_XTS_KEY_SZ_MULT)
#define ICP_QAT_HW_KASUMI_KEY_SZ 16
#define ICP_QAT_HW_KASUMI_F8_KEY_SZ                                            \
	(ICP_QAT_HW_KASUMI_KEY_SZ * QAT_CIPHER_MODE_F8_KEY_SZ_MULT)
#define ICP_QAT_HW_AES_128_XTS_KEY_SZ                                          \
	(ICP_QAT_HW_AES_128_KEY_SZ * QAT_CIPHER_MODE_XTS_KEY_SZ_MULT)
#define ICP_QAT_HW_AES_256_XTS_KEY_SZ                                          \
	(ICP_QAT_HW_AES_256_KEY_SZ * QAT_CIPHER_MODE_XTS_KEY_SZ_MULT)
#define ICP_QAT_HW_ARC4_KEY_SZ 256
#define ICP_QAT_HW_SNOW_3G_UEA2_KEY_SZ 16
#define ICP_QAT_HW_SNOW_3G_UEA2_IV_SZ 16
#define ICP_QAT_HW_ZUC_3G_EEA3_KEY_SZ 16
#define ICP_QAT_HW_ZUC_3G_EEA3_IV_SZ 16
#define ICP_QAT_HW_MODE_F8_NUM_REG_TO_CLEAR 2
#define INIT_SHRAM_CONSTANTS_TABLE_SZ 1024

struct icp_qat_hw_cipher_aes256_f8 {
	struct icp_qat_hw_cipher_config cipher_config;
	uint8_t key[ICP_QAT_HW_AES_256_F8_KEY_SZ];
};

struct icp_qat_hw_cipher_algo_blk {
	struct icp_qat_hw_cipher_aes256_f8 aes;
} __aligned(64);
#endif
