/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright(c) 2007-2022 Intel Corporation */
/* $NQC$ */
/*
 ****************************************************************************
 * @file icp_qat_hw_20_comp_defs.h, (autogenerated at 04-19-18 16:06)
 * @defgroup icp_qat_hw_comp_20
 * @ingroup icp_qat_hw_comp_20
 * @description
 * This file represents the HW configuration CSR definitions
 ****************************************************************************
 */

#ifndef _ICP_QAT_HW_20_COMP_DEFS_H
#define _ICP_QAT_HW_20_COMP_DEFS_H

/*****************************************************************************/
/* SCB Disabled - Set by FW, located in upper 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SCB_CONTROL_BITPOS 31
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SCB_CONTROL_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible SCB_CONTROL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_SCB_CONTROL_ENABLE = 0x0,
	/* Normal Mode using SCB (Default) */
	ICP_QAT_HW_COMP_20_SCB_CONTROL_DISABLE = 0x1,
	/* Legacy CPM1.x Mode with SCB disabled. */
} icp_qat_hw_comp_20_scb_control_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SCB_CONTROL_DEFAULT_VAL                  \
	ICP_QAT_HW_COMP_20_SCB_CONTROL_DISABLE

/*****************************************************************************/
/* Reset Bit Mask Disabled - Set by FW , located in upper 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_RMB_CONTROL_BITPOS 30
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_RMB_CONTROL_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible RMB_CONTROL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_RMB_CONTROL_RESET_ALL = 0x0,
	/* Reset all data structures with a set_config command. (Set by FW) */
	ICP_QAT_HW_COMP_20_RMB_CONTROL_RESET_FC_ONLY = 0x1,
	/* Reset only the Frequency Counters (LFCT) with a set_config command.
	 */
} icp_qat_hw_comp_20_rmb_control_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_RMB_CONTROL_DEFAULT_VAL                  \
	ICP_QAT_HW_COMP_20_RMB_CONTROL_RESET_ALL

/*****************************************************************************/
/* Slice Operation Mode (SOM) - Set By FW, located in upper 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SOM_CONTROL_BITPOS 28
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SOM_CONTROL_MASK 0x3
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible SOM_CONTROL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_SOM_CONTROL_NORMAL_MODE = 0x0,
	/* Normal mode. */
	ICP_QAT_HW_COMP_20_SOM_CONTROL_REPLAY_MODE = 0x1,
	/* Replay mode */
	ICP_QAT_HW_COMP_20_SOM_CONTROL_INPUT_CRC = 0x2,
	/* Input CRC Mode */
	ICP_QAT_HW_COMP_20_SOM_CONTROL_RESERVED_MODE = 0x3,
	/* Reserved. */
} icp_qat_hw_comp_20_som_control_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SOM_CONTROL_DEFAULT_VAL                  \
	ICP_QAT_HW_COMP_20_SOM_CONTROL_NORMAL_MODE

/*****************************************************************************/
/* Skip Hash Read (Set By FW) , located in upper 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SKIP_HASH_RD_CONTROL_BITPOS 27
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SKIP_HASH_RD_CONTROL_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible SKIP_HASH_RD_CONTROL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_SKIP_HASH_RD_CONTROL_NO_SKIP = 0x0,
	/* When set to 0, hash reads are not skipped.  */
	ICP_QAT_HW_COMP_20_SKIP_HASH_RD_CONTROL_SKIP_HASH_READS = 0x1,
	/* Hash reads are skipped. */
} icp_qat_hw_comp_20_skip_hash_rd_control_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SKIP_HASH_RD_CONTROL_DEFAULT_VAL         \
	ICP_QAT_HW_COMP_20_SKIP_HASH_RD_CONTROL_NO_SKIP

/*****************************************************************************/
/* SCB Unload Disable, located in upper 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SCB_UNLOAD_CONTROL_BITPOS 26
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SCB_UNLOAD_CONTROL_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible SCB_UNLOAD_CONTROL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_SCB_UNLOAD_CONTROL_UNLOAD = 0x0,
	/* Unloads the LFCT and flushes the State Registers.  */
	ICP_QAT_HW_COMP_20_SCB_UNLOAD_CONTROL_NO_UNLOAD = 0x1,
	/* Does not unload the LFCT, but flushes the State Registers. */
} icp_qat_hw_comp_20_scb_unload_control_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SCB_UNLOAD_CONTROL_DEFAULT_VAL           \
	ICP_QAT_HW_COMP_20_SCB_UNLOAD_CONTROL_UNLOAD

/*****************************************************************************/
/* Disable token fusion, located in upper 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_DISABLE_TOKEN_FUSION_CONTROL_BITPOS 21
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_DISABLE_TOKEN_FUSION_CONTROL_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible DISABLE_TOKEN_FUSION_CONTROL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_DISABLE_TOKEN_FUSION_CONTROL_ENABLE = 0x0,
	/* Enables token fusion.  */
	ICP_QAT_HW_COMP_20_DISABLE_TOKEN_FUSION_CONTROL_DISABLE = 0x1,
	/* Disables token fusion. */
} icp_qat_hw_comp_20_disable_token_fusion_control_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_DISABLE_TOKEN_FUSION_CONTROL_DEFAULT_VAL \
	ICP_QAT_HW_COMP_20_DISABLE_TOKEN_FUSION_CONTROL_ENABLE

/*****************************************************************************/
/* SCB Mode Reset Mask (Set By FW) , located in upper 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SCB_MODE_RESET_MASK_BITPOS 18
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SCB_MODE_RESET_MASK_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible SCB_MODE_RESET_MASK field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_SCB_MODE_RESET_MASK_RESET_COUNTERS = 0x0,
	/* iLZ77 mode: Reset LFCT, OBC */
	ICP_QAT_HW_COMP_20_SCB_MODE_RESET_MASK_RESET_COUNTERS_AND_HISTORY = 0x1,
	/* iLZ77 mode: Reset LFCT, OBC, HB, HT */
} icp_qat_hw_comp_20_scb_mode_reset_mask_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SCB_MODE_RESET_MASK_DEFAULT_VAL          \
	ICP_QAT_HW_COMP_20_SCB_MODE_RESET_MASK_RESET_COUNTERS

/*****************************************************************************/
/* Lazy - For iLZ77 and Static DEFLATE, Lazy = 102h , located in upper
 * 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_LAZY_PARAM_BITPOS 9
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_LAZY_PARAM_MASK 0x1ff
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_LAZY_PARAM_DEFAULT_VAL 258

/*****************************************************************************/
/* Nice - For iLZ77 and Static DEFLATE, Nice = 103h , located in upper
 * 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_NICE_PARAM_BITPOS 0
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_NICE_PARAM_MASK 0x1ff
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_NICE_PARAM_DEFAULT_VAL 259

/*****************************************************************************/
/* History Buffer Size (Set By the Driver/ Application), located in lower 32bit
 */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_HBS_CONTROL_BITPOS 14
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_HBS_CONTROL_MASK 0x7
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible HBS_CONTROL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_HBS_CONTROL_HBS_IS_32KB = 0x0,
	/* 000b - 32KB  */
	ICP_QAT_HW_COMP_20_HBS_CONTROL_HBS_IS_64KB = 0x1,
	/* 001b - 64KB */
} icp_qat_hw_comp_20_hbs_control_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_HBS_CONTROL_DEFAULT_VAL                  \
	ICP_QAT_HW_COMP_20_HBS_CONTROL_HBS_IS_32KB

/*****************************************************************************/
/* Adaptive Block Drop (Set By FW if Dynamic), located in lower 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_ABD_BITPOS 13
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_ABD_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible ABD field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_ABD_ABD_ENABLED = 0x0,
	/* 0b - Feature enabled.  */
	ICP_QAT_HW_COMP_20_ABD_ABD_DISABLED = 0x1,
	/* 1b - Feature disabled. */
} icp_qat_hw_comp_20_abd_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_ABD_DEFAULT_VAL                          \
	ICP_QAT_HW_COMP_20_ABD_ABD_ENABLED

/*****************************************************************************/
/* Literal+Length Limit Block Drop Block Drop, (Set By FW if Dynamic) , located
 * in lower 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_LLLBD_CTRL_BITPOS 12
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_LLLBD_CTRL_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible LLLBD_CTRL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_LLLBD_CTRL_LLLBD_ENABLED = 0x0,
	/* 0b - Feature enabled.  */
	ICP_QAT_HW_COMP_20_LLLBD_CTRL_LLLBD_DISABLED = 0x1,
	/* 1b - Feature disabled. */
} icp_qat_hw_comp_20_lllbd_ctrl_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_LLLBD_CTRL_DEFAULT_VAL                   \
	ICP_QAT_HW_COMP_20_LLLBD_CTRL_LLLBD_ENABLED

/*****************************************************************************/
/* Search Depth (SD) (Set By Driver/Application), located in lower 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SEARCH_DEPTH_BITPOS 8
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SEARCH_DEPTH_MASK 0xf
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible SEARCH_DEPTH field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_SEARCH_DEPTH_LEVEL_1 = 0x1,
	/* 0001b - Level 1 (search depth = 2^1 = 2) */
	ICP_QAT_HW_COMP_20_SEARCH_DEPTH_LEVEL_6 = 0x3,
	/* 0011b - Level 6 (search depth = 2^3 = 8) */
	ICP_QAT_HW_COMP_20_SEARCH_DEPTH_LEVEL_9 = 0x4,
	/* 0100b - Level 9 (search depth = 2^4 = 16) */
} icp_qat_hw_comp_20_search_depth_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SEARCH_DEPTH_DEFAULT_VAL                 \
	ICP_QAT_HW_COMP_20_SEARCH_DEPTH_LEVEL_1

/*****************************************************************************/
/* Compression Format (Set By Driver/Application. Also See CMD ID), located in
 * lower 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_HW_COMP_FORMAT_BITPOS 5
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_HW_COMP_FORMAT_MASK 0x7
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible HW_COMP_FORMAT field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_HW_COMP_FORMAT_ILZ77 = 0x0,
	/* 000 - iLZ77. (Must set Min_Match = 3 bytes and HB size = 32KB.) */
	ICP_QAT_HW_COMP_20_HW_COMP_FORMAT_DEFLATE = 0x1,
	/* 001 - Static DEFLATE. (Must set Min_Match = 3 bytes and HB size =
	   32KB.)  */
} icp_qat_hw_comp_20_hw_comp_format_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_HW_COMP_FORMAT_DEFAULT_VAL               \
	ICP_QAT_HW_COMP_20_HW_COMP_FORMAT_DEFLATE

/*****************************************************************************/
/* Skip Hash Collision (Set By FW to default value), located in lower 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SKIP_HASH_COLLISION_BITPOS 3
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SKIP_HASH_COLLISION_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible SKIP_HASH_COLLISION field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_SKIP_HASH_COLLISION_ALLOW = 0x0,
	/* When set to 0, hash collisions are allowed.  */
	ICP_QAT_HW_COMP_20_SKIP_HASH_COLLISION_DONT_ALLOW = 0x1,
	/* When set to 0, hash collisions are allowed.  */
} icp_qat_hw_comp_20_skip_hash_collision_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SKIP_HASH_COLLISION_DEFAULT_VAL          \
	ICP_QAT_HW_COMP_20_SKIP_HASH_COLLISION_ALLOW

/*****************************************************************************/
/* Skip Hash Update (Set By FW to default value) , located in lower 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SKIP_HASH_UPDATE_BITPOS 2
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SKIP_HASH_UPDATE_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible SKIP_HASH_UPDATE field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_SKIP_HASH_UPDATE_ALLOW = 0x0,
	/* 0 - hash updates are not skipped.  */
	ICP_QAT_HW_COMP_20_SKIP_HASH_UPDATE_DONT_ALLOW = 0x1,
	/* 1 - hash updates are skipped.  */
} icp_qat_hw_comp_20_skip_hash_update_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_SKIP_HASH_UPDATE_DEFAULT_VAL             \
	ICP_QAT_HW_COMP_20_SKIP_HASH_UPDATE_ALLOW

/*****************************************************************************/
/* 3-Byte Match Skip (Set By FW to default value), located in lower 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_BYTE_SKIP_BITPOS 1
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_BYTE_SKIP_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible BYTE_SKIP field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_BYTE_SKIP_3BYTE_TOKEN = 0x0,
	/* 0 - Use 3-byte token  */
	ICP_QAT_HW_COMP_20_BYTE_SKIP_3BYTE_LITERAL = 0x1,
	/* 0 - Use 3-byte literal  */
} icp_qat_hw_comp_20_byte_skip_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_BYTE_SKIP_DEFAULT_VAL                    \
	ICP_QAT_HW_COMP_20_BYTE_SKIP_3BYTE_TOKEN

/*****************************************************************************/
/* Extended Delayed Match Mode enabled (Set By the Driver), located in lower
 * 32bit */
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_EXTENDED_DELAY_MATCH_MODE_BITPOS 0
#define ICP_QAT_HW_COMP_20_CONFIG_CSR_EXTENDED_DELAY_MATCH_MODE_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible EXTENDED_DELAY_MATCH_MODE field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_COMP_20_EXTENDED_DELAY_MATCH_MODE_EDMM_DISABLED = 0x0,
	/* 0 - EXTENDED_DELAY_MATCH_MODE disabled  */
	ICP_QAT_HW_COMP_20_EXTENDED_DELAY_MATCH_MODE_EDMM_ENABLED = 0x1,
	/* 1 - EXTENDED_DELAY_MATCH_MODE enabled  */
} icp_qat_hw_comp_20_extended_delay_match_mode_t;

#define ICP_QAT_HW_COMP_20_CONFIG_CSR_EXTENDED_DELAY_MATCH_MODE_DEFAULT_VAL    \
	ICP_QAT_HW_COMP_20_EXTENDED_DELAY_MATCH_MODE_EDMM_DISABLED

/*****************************************************************************/
/* Speculative Decoder Disable (Set By the Driver/ Application), located in
 * upper 32bit */
#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_SPECULATIVE_DECODER_CONTROL_BITPOS 31
#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_SPECULATIVE_DECODER_CONTROL_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible SPECULATIVE_DECODER_CONTROL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_DECOMP_20_SPECULATIVE_DECODER_CONTROL_ENABLE = 0x0,
	/* 0b - Enabled  */
	ICP_QAT_HW_DECOMP_20_SPECULATIVE_DECODER_CONTROL_DISABLE = 0x1,
	/* 1b - Disabled  */
} icp_qat_hw_decomp_20_speculative_decoder_control_t;

#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_SPECULATIVE_DECODER_CONTROL_DEFAULT_VAL \
	ICP_QAT_HW_DECOMP_20_SPECULATIVE_DECODER_CONTROL_ENABLE

/*****************************************************************************/
/* Mini CAM Disable (Set By the Driver/ Application), located in upper 32bit */
#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_MINI_CAM_CONTROL_BITPOS 30
#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_MINI_CAM_CONTROL_MASK 0x1
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible MINI_CAM_CONTROL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_DECOMP_20_MINI_CAM_CONTROL_ENABLE = 0x0,
	/* 0b - Enabled  */
	ICP_QAT_HW_DECOMP_20_MINI_CAM_CONTROL_DISABLE = 0x1,
	/* 1b - Disabled  */
} icp_qat_hw_decomp_20_mini_cam_control_t;

#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_MINI_CAM_CONTROL_DEFAULT_VAL           \
	ICP_QAT_HW_DECOMP_20_MINI_CAM_CONTROL_ENABLE

/*****************************************************************************/
/* History Buffer Size (Set By the Driver/ Application), located in lower 32bit
 */
#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_HBS_CONTROL_BITPOS 14
#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_HBS_CONTROL_MASK 0x7
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible HBS_CONTROL field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_DECOMP_20_HBS_CONTROL_HBS_IS_32KB = 0x0,
	/* 000b - 32KB  */
} icp_qat_hw_decomp_20_hbs_control_t;

#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_HBS_CONTROL_DEFAULT_VAL                \
	ICP_QAT_HW_DECOMP_20_HBS_CONTROL_HBS_IS_32KB

/*****************************************************************************/
/* Decompression Format (Set By Driver/Application. Also See CMD ID), located in
 * lower 32bit */
#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_HW_DECOMP_FORMAT_BITPOS 5
#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_HW_DECOMP_FORMAT_MASK 0x7
/*
 ****************************************************************************
 * @ingroup icp_qat_hw_defs
 * @description
 *      Enumeration of possible HW_DECOMP_FORMAT field values
 *****************************************************************************/
typedef enum {
	ICP_QAT_HW_DECOMP_20_HW_DECOMP_FORMAT_DEFLATE = 0x1,
	/* 001 - Static DEFLATE. (Must set Min_Match = 3 bytes and HB size =
	   32KB.)  */
} icp_qat_hw_decomp_20_hw_comp_format_t;

#define ICP_QAT_HW_DECOMP_20_CONFIG_CSR_HW_DECOMP_FORMAT_DEFAULT_VAL           \
	ICP_QAT_HW_DECOMP_20_HW_DECOMP_FORMAT_DEFLATE

#endif //_ICP_QAT_HW_20_COMP_DEFS_H
