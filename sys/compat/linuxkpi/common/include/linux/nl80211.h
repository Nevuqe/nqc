/*-
 * Copyright (c) 2020-2021 The FreeBSD Foundation
 *
 * This software was developed by Björn Zeeb under sponsorship from
 * the FreeBSD Foundation.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef	_LINUXKPI_LINUX_NL80211_H
#define	_LINUXKPI_LINUX_NL80211_H

#include <linux/bitops.h>

enum nl80211_feature_flags {
	NL80211_FEATURE_AP_MODE_CHAN_WIDTH_CHANGE	= BIT(0),
	NL80211_FEATURE_DS_PARAM_SET_IE_IN_PROBES	= BIT(1),
	NL80211_FEATURE_HT_IBSS				= BIT(2),
	NL80211_FEATURE_LOW_PRIORITY_SCAN		= BIT(3),
	NL80211_FEATURE_ND_RANDOM_MAC_ADDR		= BIT(4),
	NL80211_FEATURE_P2P_GO_CTWIN			= BIT(5),
	NL80211_FEATURE_P2P_GO_OPPPS			= BIT(6),
	NL80211_FEATURE_QUIET				= BIT(7),
	NL80211_FEATURE_SCAN_RANDOM_MAC_ADDR		= BIT(8),
	NL80211_FEATURE_SCHED_SCAN_RANDOM_MAC_ADDR	= BIT(9),
	NL80211_FEATURE_DYNAMIC_SMPS			= BIT(10),
	NL80211_FEATURE_STATIC_SMPS			= BIT(11),
	NL80211_FEATURE_SUPPORTS_WMM_ADMISSION		= BIT(12),
	NL80211_FEATURE_TDLS_CHANNEL_SWITCH		= BIT(13),
	NL80211_FEATURE_TX_POWER_INSERTION		= BIT(14),
	NL80211_FEATURE_WFA_TPC_IE_IN_PROBES		= BIT(15),
	NL80211_FEATURE_AP_SCAN				= BIT(16),
	NL80211_FEATURE_ACTIVE_MONITOR			= BIT(17),
};

enum nl80211_pmsr_ftm_failure_flags {
	NL80211_PMSR_FTM_FAILURE_NO_RESPONSE		= BIT(0),
	NL80211_PMSR_FTM_FAILURE_PEER_BUSY		= BIT(1),
	NL80211_PMSR_FTM_FAILURE_UNSPECIFIED		= BIT(2),
};

enum nl80211_pmsr_status_flags {
	NL80211_PMSR_STATUS_FAILURE			= BIT(0),
	NL80211_PMSR_STATUS_SUCCESS			= BIT(1),
	NL80211_PMSR_STATUS_TIMEOUT			= BIT(2),
};

#define	NL80211_PMSR_TYPE_FTM				1

enum nl80211_reg_rule_flags {
	NL80211_RRF_AUTO_BW				= BIT(0),
	NL80211_RRF_DFS					= BIT(1),
	NL80211_RRF_GO_CONCURRENT			= BIT(2),
	NL80211_RRF_NO_IR				= BIT(3),
	NL80211_RRF_NO_OUTDOOR				= BIT(4),
	NL80211_RRF_NO_HT40MINUS			= BIT(5),
	NL80211_RRF_NO_HT40PLUS				= BIT(6),
	NL80211_RRF_NO_80MHZ				= BIT(7),
	NL80211_RRF_NO_160MHZ				= BIT(8),
	NL80211_RRF_NO_HE				= BIT(9),
	NL80211_RRF_NO_OFDM				= BIT(10),
};
#define	NL80211_RRF_NO_HT40	(NL80211_RRF_NO_HT40MINUS|NL80211_RRF_NO_HT40PLUS)

enum nl80211_scan_flags {
	NL80211_SCAN_FLAG_FILS_MAX_CHANNEL_TIME		= BIT(0),
	NL80211_SCAN_FLAG_OCE_PROBE_REQ_DEFERRAL_SUPPRESSION	= BIT(1),
	NL80211_SCAN_FLAG_OCE_PROBE_REQ_HIGH_TX_RATE	= BIT(2),
	NL80211_SCAN_FLAG_RANDOM_ADDR			= BIT(3),
	NL80211_SCAN_FLAG_COLOCATED_6GHZ		= BIT(4),
	NL80211_SCAN_FLAG_RANDOM_SN			= BIT(5),
	NL80211_SCAN_FLAG_ACCEPT_BCAST_PROBE_RESP	= BIT(6),
};

#define	NL80211_MAX_SUPP_REG_RULES			512	/* TODO FIXME, random */

#define	NL80211_BSS_CHAN_WIDTH_20			__LINE__ /* TODO FIXME, brcmfmac */

enum nl80211_wpa_versions {
	NL80211_WPA_VERSION_1	= 1,
	NL80211_WPA_VERSION_2,
	NL80211_WPA_VERSION_3,
};

enum nl80211_bss_select_attr {
	__NL80211_BSS_SELECT_ATTR_INVALID	= 0,
	NL80211_BSS_SELECT_ATTR_BAND_PREF,
	NL80211_BSS_SELECT_ATTR_RSSI,
	NL80211_BSS_SELECT_ATTR_RSSI_ADJUST,
};

enum nl80211_sta_flag {
	/* XXX TODO */
	NL80211_STA_FLAG_ASSOCIATED,
	NL80211_STA_FLAG_AUTHENTICATED,
	NL80211_STA_FLAG_AUTHORIZED,
	NL80211_STA_FLAG_TDLS_PEER,
	NL80211_STA_FLAG_WME,
};

enum nl80211_band {
	/* XXX TODO */
	NL80211_BAND_2GHZ	= 0,
	NL80211_BAND_5GHZ,
	NL80211_BAND_60GHZ,
	NL80211_BAND_6GHZ,

	/* Keep this last. */
	NUM_NL80211_BANDS
};

enum nl80211_chan_flags {
	/* XXX TODO */
	NL80211_CHAN_NO_HT,
};

enum nl80211_chan_width {
	/* XXX TODO */
	NL80211_CHAN_WIDTH_20_NOHT,
	NL80211_CHAN_WIDTH_20,
	NL80211_CHAN_WIDTH_40,
	NL80211_CHAN_WIDTH_80,
	NL80211_CHAN_WIDTH_80P80,
	NL80211_CHAN_WIDTH_160,
	NL80211_CHAN_WIDTH_5,
	NL80211_CHAN_WIDTH_10,
};

enum nl80211_iftype {
	/* XXX TODO */
	NL80211_IFTYPE_UNSPECIFIED,
	NL80211_IFTYPE_ADHOC,
	NL80211_IFTYPE_STATION,
	NL80211_IFTYPE_AP,
	NL80211_IFTYPE_AP_VLAN,
	NL80211_IFTYPE_MONITOR,
	NL80211_IFTYPE_P2P_CLIENT,
	NL80211_IFTYPE_P2P_DEVICE,
	NL80211_IFTYPE_P2P_GO,
	NL80211_IFTYPE_MESH_POINT,
	NL80211_IFTYPE_WDS,
	NL80211_IFTYPE_OCB,

	/* Keep this last. */
	NUM_NL80211_IFTYPES
};

enum nl80211_preamble {
	/* XXX TODO */
	NL80211_PREAMBLE_LEGACY,
	NL80211_PREAMBLE_HT,
	NL80211_PREAMBLE_VHT,
	NL80211_PREAMBLE_HE,
};

enum nl80211_tdls_operation {
	/* XXX TODO */
	NL80211_TDLS_SETUP,
	NL80211_TDLS_TEARDOWN,
	NL80211_TDLS_ENABLE_LINK,
	NL80211_TDLS_DISABLE_LINK,
	NL80211_TDLS_DISCOVERY_REQ,
	NL80211_TKIP_DATA_OFFSET_RX_MIC_KEY,
	NL80211_TKIP_DATA_OFFSET_TX_MIC_KEY,
};

enum nl80211_cqm_rssi_threshold_event {
	/* XXX TODO */
	NL80211_CQM_RSSI_THRESHOLD_EVENT_LOW,
	NL80211_CQM_RSSI_THRESHOLD_EVENT_HIGH,
};

enum nl80211_ext_feature {
	/* XXX TODO */
	NL80211_EXT_FEATURE_ACCEPT_BCAST_PROBE_RESP,
	NL80211_EXT_FEATURE_BSS_PARENT_TSF,
	NL80211_EXT_FEATURE_CAN_REPLACE_PTK0,
	NL80211_EXT_FEATURE_DFS_OFFLOAD,
	NL80211_EXT_FEATURE_ENABLE_FTM_RESPONDER,
	NL80211_EXT_FEATURE_EXT_KEY_ID,
	NL80211_EXT_FEATURE_FILS_MAX_CHANNEL_TIME,
	NL80211_EXT_FEATURE_MU_MIMO_AIR_SNIFFER,
	NL80211_EXT_FEATURE_OCE_PROBE_REQ_DEFERRAL_SUPPRESSION,
	NL80211_EXT_FEATURE_OCE_PROBE_REQ_HIGH_TX_RATE,
	NL80211_EXT_FEATURE_PROTECTED_TWT,
	NL80211_EXT_FEATURE_SAE_OFFLOAD,
	NL80211_EXT_FEATURE_SCAN_START_TIME,
	NL80211_EXT_FEATURE_SET_SCAN_DWELL,
	NL80211_EXT_FEATURE_VHT_IBSS,
	NL80211_EXT_FEATURE_4WAY_HANDSHAKE_STA_1X,
	NL80211_EXT_FEATURE_4WAY_HANDSHAKE_STA_PSK,
	NL80211_EXT_FEATURE_BEACON_PROTECTION_CLIENT,
	NL80211_EXT_FEATURE_SCAN_RANDOM_SN,
	NL80211_EXT_FEATURE_STA_TX_PWR,
	NL80211_EXT_FEATURE_CQM_RSSI_LIST,
	NL80211_EXT_FEATURE_AQL,
	NL80211_EXT_FEATURE_AIRTIME_FAIRNESS,
	NL80211_EXT_FEATURE_ACK_SIGNAL_SUPPORT,
	NL80211_EXT_FEATURE_BEACON_RATE_LEGACY,
	NL80211_EXT_FEATURE_BEACON_RATE_HT,
	NL80211_EXT_FEATURE_BEACON_RATE_VHT,
	NL80211_EXT_FEATURE_BEACON_RATE_HE,
	NL80211_EXT_FEATURE_BSS_COLOR,
	NL80211_EXT_FEATURE_FILS_DISCOVERY,
	NL80211_EXT_FEATURE_RADAR_BACKGROUND,
	NL80211_EXT_FEATURE_UNSOL_BCAST_PROBE_RESP,

	/* Keep this last. */
	NUM_NL80211_EXT_FEATURES
};

enum nl80211_sta_info {
	/* XXX TODO */
	NL80211_STA_INFO_BEACON_RX,
	NL80211_STA_INFO_BEACON_SIGNAL_AVG,
	NL80211_STA_INFO_BSS_PARAM,
	NL80211_STA_INFO_CHAIN_SIGNAL,
	NL80211_STA_INFO_CONNECTED_TIME,
	NL80211_STA_INFO_INACTIVE_TIME,
	NL80211_STA_INFO_SIGNAL,
	NL80211_STA_INFO_SIGNAL_AVG,
	NL80211_STA_INFO_STA_FLAGS,
	NL80211_STA_INFO_RX_BITRATE,
	NL80211_STA_INFO_RX_PACKETS,
	NL80211_STA_INFO_RX_BYTES,
	NL80211_STA_INFO_RX_DROP_MISC,
	NL80211_STA_INFO_TX_BITRATE,
	NL80211_STA_INFO_TX_PACKETS,
	NL80211_STA_INFO_TX_BYTES,
	NL80211_STA_INFO_TX_BYTES64,
	NL80211_STA_INFO_TX_FAILED,
	NL80211_STA_INFO_TX_RETRIES,
	NL80211_STA_INFO_RX_DURATION,
	NL80211_STA_INFO_TX_DURATION,
};

enum nl80211_ftm_stats {
	/* XXX TODO */
	NL80211_FTM_STATS_ASAP_NUM,
	NL80211_FTM_STATS_FAILED_NUM,
	NL80211_FTM_STATS_NON_ASAP_NUM,
	NL80211_FTM_STATS_OUT_OF_WINDOW_TRIGGERS_NUM,
	NL80211_FTM_STATS_PARTIAL_NUM,
	NL80211_FTM_STATS_RESCHEDULE_REQUESTS_NUM,
	NL80211_FTM_STATS_SUCCESS_NUM,
	NL80211_FTM_STATS_TOTAL_DURATION_MSEC,
	NL80211_FTM_STATS_UNKNOWN_TRIGGERS_NUM,
};

enum nl80211_reg_initiator {
	/* XXX TODO */
	NL80211_REGDOM_SET_BY_USER,
	NL80211_REGDOM_SET_BY_DRIVER,
	NL80211_REGDOM_SET_BY_CORE,
	NL80211_REGDOM_SET_BY_COUNTRY_IE,
};

struct nl80211_sta_flag_update {
	/* XXX TODO */
	int     mask, set;

};

enum nl80211_tx_power_setting {
	/* XXX TODO */
	NL80211_TX_POWER_AUTOMATIC,
	NL80211_TX_POWER_FIXED,
	NL80211_TX_POWER_LIMITED,
};

enum nl80211_crit_proto_id {
	/* XXX TODO */
	NL80211_CRIT_PROTO_DHCP,
};

enum nl80211_auth_type {
	NL80211_AUTHTYPE_AUTOMATIC,
	NL80211_AUTHTYPE_OPEN_SYSTEM,
	NL80211_AUTHTYPE_SHARED_KEY,
	NL80211_AUTHTYPE_SAE,
};

enum nl80211_key_type {
	NL80211_KEYTYPE_GROUP,
	NL80211_KEYTYPE_PAIRWISE,
};

enum nl80211_he_ru_alloc {
	NL80211_RATE_INFO_HE_RU_ALLOC_26,
	NL80211_RATE_INFO_HE_RU_ALLOC_52,
	NL80211_RATE_INFO_HE_RU_ALLOC_106,
	NL80211_RATE_INFO_HE_RU_ALLOC_242,
	NL80211_RATE_INFO_HE_RU_ALLOC_484,
	NL80211_RATE_INFO_HE_RU_ALLOC_996,
	NL80211_RATE_INFO_HE_RU_ALLOC_2x996,
};

enum nl80211_he_gi {
	NL80211_RATE_INFO_HE_GI_0_8,
	NL80211_RATE_INFO_HE_GI_1_6,
	NL80211_RATE_INFO_HE_GI_3_2,
};

enum nl80211_he_ltf {
	NL80211_RATE_INFO_HE_1XLTF,
	NL80211_RATE_INFO_HE_2XLTF,
	NL80211_RATE_INFO_HE_4XLTF,
};

enum nl80211_dfs_regions {
	NL80211_DFS_UNSET,
	NL80211_DFS_FCC,
	NL80211_DFS_ETSI,
	NL80211_DFS_JP,
};

enum nl80211_dfs_state {
	NL80211_DFS_USABLE,
};

enum nl80211_sar_type {
	NL80211_SAR_TYPE_POWER,
};

#define	NL80211_VHT_NSS_MAX			8
#define	NL80211_HE_NSS_MAX			8

enum nl80211_tid_cfg_attr {
	NL80211_TID_CONFIG_ATTR_NOACK,
	NL80211_TID_CONFIG_ATTR_RETRY_SHORT,
	NL80211_TID_CONFIG_ATTR_TX_RATE_TYPE,
	NL80211_TID_CONFIG_ATTR_TX_RATE,
	NL80211_TID_CONFIG_ATTR_RTSCTS_CTRL,
	NL80211_TID_CONFIG_ATTR_RETRY_LONG,
	NL80211_TID_CONFIG_ATTR_AMPDU_CTRL,
};

enum nl80211_tid_config {
	NL80211_TID_CONFIG_ENABLE,
};

enum nl80211_tx_rate_setting {
	NL80211_TX_RATE_AUTOMATIC,
	NL80211_TX_RATE_FIXED,
	NL80211_TX_RATE_LIMITED,
};

enum nl80211_txrate_gi {
	NL80211_TXRATE_DEFAULT_GI,
	NL80211_TXRATE_FORCE_SGI,
	NL80211_TXRATE_FORCE_LGI,
};

enum nl80211_probe_resp_offload_support {
	NL80211_PROBE_RESP_OFFLOAD_SUPPORT_WPS2,
	NL80211_PROBE_RESP_OFFLOAD_SUPPORT_WPS,
	NL80211_PROBE_RESP_OFFLOAD_SUPPORT_P2P,
};

enum nl80211_user_reg_hint_type {
	NL80211_USER_REG_HINT_USER,
};

#define	NL80211_KCK_LEN				16
#define	NL80211_KCK_EXT_LEN			24
#define	NL80211_KEK_LEN				16
#define	NL80211_KEK_EXT_LEN			32
#define	NL80211_REPLAY_CTR_LEN			8
#endif	/* _LINUXKPI_LINUX_NL80211_H */
