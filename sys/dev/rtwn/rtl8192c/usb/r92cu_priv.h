/*-
 * Copyright (c) 2010 Damien Bergamini <damien.bergamini@free.fr>
 * Copyright (c) 2016 Andriy Voskoboinyk <avos@FreeBSD.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * $OpenBSD: if_urtwnreg.h,v 1.3 2010/11/16 18:02:59 damien Exp $
 * $NQC$
 */

#ifndef R92CU_PRIV_H
#define R92CU_PRIV_H

#include <dev/rtwn/rtl8192c/r92c_priv.h>

/*
 * MAC initialization values.
 */
static const struct rtwn_mac_prog rtl8192cu_mac[] = {
	{ 0x420, 0x80 }, { 0x423, 0x00 }, { 0x430, 0x00 }, { 0x431, 0x00 },
	{ 0x432, 0x00 }, { 0x433, 0x01 }, { 0x434, 0x04 }, { 0x435, 0x05 },
	{ 0x436, 0x06 }, { 0x437, 0x07 }, { 0x438, 0x00 }, { 0x439, 0x00 },
	{ 0x43a, 0x00 }, { 0x43b, 0x01 }, { 0x43c, 0x04 }, { 0x43d, 0x05 },
	{ 0x43e, 0x06 }, { 0x43f, 0x07 }, { 0x440, 0x5d }, { 0x441, 0x01 },
	{ 0x442, 0x00 }, { 0x444, 0x15 }, { 0x445, 0xf0 }, { 0x446, 0x0f },
	{ 0x447, 0x00 }, { 0x458, 0x41 }, { 0x459, 0xa8 }, { 0x45a, 0x72 },
	{ 0x45b, 0xb9 }, { 0x460, 0x66 }, { 0x461, 0x66 }, { 0x462, 0x08 },
	{ 0x463, 0x03 }, { 0x4c8, 0xff }, { 0x4c9, 0x08 }, { 0x4cc, 0xff },
	{ 0x4cd, 0xff }, { 0x4ce, 0x01 }, { 0x500, 0x26 }, { 0x501, 0xa2 },
	{ 0x502, 0x2f }, { 0x503, 0x00 }, { 0x504, 0x28 }, { 0x505, 0xa3 },
	{ 0x506, 0x5e }, { 0x507, 0x00 }, { 0x508, 0x2b }, { 0x509, 0xa4 },
	{ 0x50a, 0x5e }, { 0x50b, 0x00 }, { 0x50c, 0x4f }, { 0x50d, 0xa4 },
	{ 0x50e, 0x00 }, { 0x50f, 0x00 }, { 0x512, 0x1c }, { 0x514, 0x0a },
	{ 0x515, 0x10 }, { 0x516, 0x0a }, { 0x517, 0x10 }, { 0x51a, 0x16 },
	{ 0x524, 0x0f }, { 0x525, 0x4f }, { 0x546, 0x40 }, { 0x547, 0x00 },
	{ 0x550, 0x10 }, { 0x551, 0x10 }, { 0x559, 0x02 }, { 0x55a, 0x02 },
	{ 0x55d, 0xff }, { 0x605, 0x30 }, { 0x608, 0x0e }, { 0x609, 0x2a },
	{ 0x652, 0x20 }, { 0x63c, 0x0a }, { 0x63d, 0x0e }, { 0x63e, 0x0a },
	{ 0x63f, 0x0e }, { 0x66e, 0x05 }, { 0x700, 0x21 }, { 0x701, 0x43 },
	{ 0x702, 0x65 }, { 0x703, 0x87 }, { 0x708, 0x21 }, { 0x709, 0x43 },
	{ 0x70a, 0x65 }, { 0x70b, 0x87 }
};

/*
 * Baseband initialization values.
 */
static const uint16_t rtl8192cu_bb_regs0_88ru[] = {
	0x024, 0x028, 0x040, 0x800, 0x804, 0x808, 0x80c, 0x810, 0x814,
	0x818, 0x81c, 0x820, 0x824, 0x828, 0x82c, 0x830, 0x834, 0x838,
	0x83c, 0x840, 0x844, 0x848, 0x84c, 0x850, 0x854, 0x858, 0x85c,
	0x860, 0x864, 0x868, 0x86c, 0x870, 0x874, 0x878, 0x87c, 0x880,
	0x884, 0x888, 0x88c, 0x890, 0x894, 0x898, 0x89c, 0x900, 0x904,
	0x908, 0x90c, 0xa00, 0xa04, 0xa08, 0xa0c, 0xa10, 0xa14, 0xa18,
	0xa1c, 0xa20, 0xa24, 0xa28, 0xa2c, 0xa70, 0xa74, 0xc00, 0xc04,
	0xc08, 0xc0c, 0xc10, 0xc14, 0xc18, 0xc1c, 0xc20, 0xc24, 0xc28,
	0xc2c, 0xc30, 0xc34, 0xc38, 0xc3c, 0xc40, 0xc44, 0xc48, 0xc4c,
	0xc50, 0xc54, 0xc58, 0xc5c, 0xc60, 0xc64, 0xc68, 0xc6c, 0xc70
}, rtl8192cu_bb_regs0[] = {
	0x024, 0x028, 0x800, 0x804, 0x808, 0x80c, 0x810, 0x814, 0x818,
	0x81c, 0x820, 0x824, 0x828, 0x82c, 0x830, 0x834, 0x838, 0x83c,
	0x840, 0x844, 0x848, 0x84c, 0x850, 0x854, 0x858, 0x85c, 0x860,
	0x864, 0x868, 0x86c, 0x870, 0x874, 0x878, 0x87c, 0x880, 0x884,
	0x888, 0x88c, 0x890, 0x894, 0x898, 0x89c, 0x900, 0x904, 0x908,
	0x90c, 0xa00, 0xa04, 0xa08, 0xa0c, 0xa10, 0xa14, 0xa18, 0xa1c,
	0xa20, 0xa24, 0xa28, 0xa2c, 0xa70, 0xa74, 0xc00, 0xc04, 0xc08,
	0xc0c, 0xc10, 0xc14, 0xc18, 0xc1c, 0xc20, 0xc24, 0xc28, 0xc2c,
	0xc30, 0xc34, 0xc38, 0xc3c, 0xc40, 0xc44, 0xc48, 0xc4c, 0xc50,
	0xc54, 0xc58, 0xc5c, 0xc60, 0xc64, 0xc68, 0xc6c, 0xc70
}, rtl8192cu_bb_regs1[] = {
	0xc74, 0xc78, 0xc7c, 0xc80, 0xc84, 0xc88
}, rtl8192cu_bb_regs2[] = {
	0xc8c, 0xc90, 0xc94, 0xc98, 0xc9c, 0xca0, 0xca4, 0xca8, 0xcac,
	0xcb0, 0xcb4, 0xcb8, 0xcbc, 0xcc0, 0xcc4, 0xcc8, 0xccc, 0xcd0,
	0xcd4, 0xcd8, 0xcdc, 0xce0, 0xce4, 0xce8, 0xcec, 0xd00
}, rtl8192cu_bb_regs5_88ru[] = {
	0xe60, 0xe68, 0xe6c, 0xe70, 0xe74, 0xe78, 0xe7c, 0xe80, 0xe84,
	0xe88, 0xe8c, 0xed0, 0xed4, 0xed8, 0xedc, 0xee0, 0xeec, 0xee8,
	0xf14, 0xf4c, 0xf00
};

static const uint32_t rtl8192cu_bb_vals0_88cu[] = {
	0x0011800d, 0x00ffdb83, 0x80040000, 0x00000001, 0x0000fc00,
	0x0000000a, 0x10005388, 0x020c3d10, 0x02200385, 0x00000000,
	0x01000100, 0x00390004, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00010000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x569a569a,
	0x001b25a4, 0x66e60230, 0x061f0130, 0x00000000, 0x32323200,
	0x07000700, 0x22004000, 0x00000808, 0x00000000, 0xc0083070,
	0x000004d5, 0x00000000, 0xccc000c0, 0x00000800, 0xfffffffe,
	0x40302010, 0x00706050, 0x00000000, 0x00000023, 0x00000000,
	0x81121111, 0x00d047c8, 0x80ff000c, 0x8c838300, 0x2e68120f,
	0x9500bb78, 0x11144028, 0x00881117, 0x89140f00, 0x1a1b0000,
	0x090e1317, 0x00000204, 0x00d30000, 0x101fbf00, 0x00000007,
	0x48071d40, 0x03a05611, 0x000000e4, 0x6c6c6c6c, 0x08800000,
	0x40000100, 0x08800000, 0x40000100, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x69e9ac44, 0x469652cf, 0x49795994,
	0x0a97971c, 0x1f7c403f, 0x000100b7, 0xec020107, 0x007f037f,
	0x6954341e, 0x43bc0094, 0x6954341e, 0x433c0094, 0x00000000,
	0x5116848b, 0x47c00bff, 0x00000036, 0x2c7f000d
}, rtl8192cu_bb_vals0_88ru[] = {
	0x0011800d, 0x00ffdb83, 0x000c0004, 0x80040000, 0x00000001,
	0x0000fc00, 0x0000000a, 0x10005388, 0x020c3d10, 0x02200385,
	0x00000000, 0x01000100, 0x00390204, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00010000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x569a569a, 0x001b25a4, 0x66e60230, 0x061f0130, 0x00000000,
	0x32323200, 0x03000300, 0x22004000, 0x00000808, 0x00ffc3f1,
	0xc0083070, 0x000004d5, 0x00000000, 0xccc000c0, 0x00000800,
	0xfffffffe, 0x40302010, 0x00706050, 0x00000000, 0x00000023,
	0x00000000, 0x81121111, 0x00d047c8, 0x80ff000c, 0x8c838300,
	0x2e68120f, 0x9500bb78, 0x11144028, 0x00881117, 0x89140f00,
	0x15160000, 0x070b0f12, 0x00000104, 0x00d30000, 0x101fbf00,
	0x00000007, 0x48071d40, 0x03a05611, 0x000000e4, 0x6c6c6c6c,
	0x08800000, 0x40000100, 0x08800000, 0x40000100, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x69e9ac44, 0x469652cf,
	0x49795994, 0x0a97971c, 0x1f7c403f, 0x000100b7, 0xec020107,
	0x007f037f, 0x6954342e, 0x43bc0094, 0x6954342f, 0x433c0094,
	0x00000000, 0x5116848b, 0x47c00bff, 0x00000036, 0x2c56000d
}, rtl8192cu_bb_vals0_92ce_92cu[] = {
	0x0011800d, 0x00ffdb83, 0x80040002, 0x00000003, 0x0000fc00,
	0x0000000a, 0x10005388, 0x020c3d10, 0x02200385, 0x00000000,
	0x01000100, 0x00390004, 0x01000100, 0x00390004, 0x27272727,
	0x27272727, 0x27272727, 0x27272727, 0x00010000, 0x00010000,
	0x27272727, 0x27272727, 0x00000000, 0x00000000, 0x569a569a,
	0x0c1b25a4, 0x66e60230, 0x061f0130, 0x27272727, 0x2b2b2b27,
	0x07000700, 0x22184000, 0x08080808, 0x00000000, 0xc0083070,
	0x000004d5, 0x00000000, 0xcc0000c0, 0x00000800, 0xfffffffe,
	0x40302010, 0x00706050, 0x00000000, 0x00000023, 0x00000000,
	0x81121313, 0x00d047c8, 0x80ff000c, 0x8c838300, 0x2e68120f,
	0x9500bb78, 0x11144028, 0x00881117, 0x89140f00, 0x1a1b0000,
	0x090e1317, 0x00000204, 0x00d30000, 0x101fbf00, 0x00000007,
	0x48071d40, 0x03a05633, 0x000000e4, 0x6c6c6c6c, 0x08800000,
	0x40000100, 0x08800000, 0x40000100, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x69e9ac44, 0x469652cf, 0x49795994,
	0x0a97971c, 0x1f7c403f, 0x000100b7, 0xec020107, 0x007f037f,
	0x6954341e, 0x43bc0094, 0x6954341e, 0x433c0094, 0x00000000,
	0x5116848b, 0x47c00bff, 0x00000036, 0x2c7f000d
}, rtl8192cu_bb_vals1_88ru[] = {
	0x018610db, 0x0000001f, 0x00b91612, 0x24000090, 0x20f60000,
	0x24000090
}, rtl8192cu_bb_vals1_92cu[] = {
	0x0186115b, 0x0000001f, 0x00b99612, 0x40000100, 0x20f60000,
	0x40000100
}, rtl8192cu_bb_vals1_88cu_92ce[] = {
	0x018610db, 0x0000001f, 0x00b91612, 0x40000100, 0x20f60000,
	0x40000100
}, rtl8192cu_bb_vals2[] = {
	0x20200000, 0x00121820, 0x00000000, 0x00121820, 0x00007f7f,
	0x00000000, 0x00000080, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x28000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x64b22427,
	0x00766932, 0x00222222, 0x00000000, 0x37644302, 0x2f97d40c,
	0x00080740
}, rtl8192cu_bb_vals5_88cu[] = {
	0x00000008, 0x001b25a4, 0x631b25a0, 0x631b25a0, 0x081b25a0,
	0x081b25a0, 0x081b25a0, 0x081b25a0, 0x631b25a0, 0x081b25a0,
	0x631b25a0, 0x631b25a0, 0x631b25a0, 0x631b25a0, 0x001b25a0,
	0x001b25a0, 0x6b1b25a0, 0x00000003, 0x00000000, 0x00000300
}, rtl8192cu_bb_vals5_88ru[] = {
	0x00000010, 0x001b25a4, 0x631b25a0, 0x631b25a0, 0x081b25a0,
	0x081b25a0, 0x081b25a0, 0x081b25a0, 0x631b25a0, 0x081b25a0,
	0x631b25a0, 0x631b25a0, 0x631b25a0, 0x631b25a0, 0x001b25a0,
	0x001b25a0, 0x6b1b25a0, 0x31555448, 0x00000003, 0x00000000,
	0x00000300
};

static const struct rtwn_bb_prog rtl8192cu_bb[] = {
	/* RTL8188CE / RTL8188CU. */
	{
		nitems(rtl8192cu_bb_regs0),
		rtl8192cu_bb_regs0,
		rtl8192cu_bb_vals0_88cu,
		{ R92C_COND_RTL8188CU | R92C_COND_RTL8188CE },
		/* RTL8188RU. */
		&(const struct rtwn_bb_prog){
			nitems(rtl8192cu_bb_regs0_88ru),
			rtl8192cu_bb_regs0_88ru,
			rtl8192cu_bb_vals0_88ru,
			{ R92C_COND_RTL8188RU },
			/* Others. */
			&(const struct rtwn_bb_prog){
				nitems(rtl8192cu_bb_regs0),
				rtl8192cu_bb_regs0,
				rtl8192cu_bb_vals0_92ce_92cu,
				{ 0 },
				NULL
			}
		}
	},
	/* RTL8188RU. */
	{
		nitems(rtl8192cu_bb_regs1),
		rtl8192cu_bb_regs1,
		rtl8192cu_bb_vals1_88ru,
		{ R92C_COND_RTL8188RU },
		/* RTL8192CU. */
		&(const struct rtwn_bb_prog){
			nitems(rtl8192cu_bb_regs1),
			rtl8192cu_bb_regs1,
			rtl8192cu_bb_vals1_92cu,
			{ R92C_COND_RTL8192CU },
			/* Others. */
			&(const struct rtwn_bb_prog){
				nitems(rtl8192cu_bb_regs1),
				rtl8192cu_bb_regs1,
				rtl8192cu_bb_vals1_88cu_92ce,
				{ 0 },
				NULL
			}
		}
	},
	{
		nitems(rtl8192cu_bb_regs2),
		rtl8192cu_bb_regs2,
		rtl8192cu_bb_vals2,
		{ 0 },
		NULL
	},
	/* RTL8192CE / RTL8192CU. */
	{
		nitems(rtl8192c_bb_regs3),
		rtl8192c_bb_regs3,
		rtl8192c_bb_vals3_92ce_92cu,
		{ R92C_COND_RTL8192C },
		/* Others. */
		&(const struct rtwn_bb_prog){
			nitems(rtl8192c_bb_regs3),
			rtl8192c_bb_regs3,
			rtl8192c_bb_vals3_88cu_88ru,
			{ 0 },
			NULL
		}
	},
	{
		nitems(rtl8192c_bb_regs4),
		rtl8192c_bb_regs4,
		rtl8192c_bb_vals4,
		{ 0 },
		NULL
	},
	/* RTL8188CE / RTL8188CU. */
	{
		nitems(rtl8192c_bb_regs5),
		rtl8192c_bb_regs5,
		rtl8192cu_bb_vals5_88cu,
		{ R92C_COND_RTL8188CU | R92C_COND_RTL8188CE },
		/* RTL8188RU. */
		&(const struct rtwn_bb_prog){
			nitems(rtl8192cu_bb_regs5_88ru),
			rtl8192cu_bb_regs5_88ru,
			rtl8192cu_bb_vals5_88ru,
			{ R92C_COND_RTL8188RU },
			/* Others. */
			&(const struct rtwn_bb_prog){
				nitems(rtl8192c_bb_regs5),
				rtl8192c_bb_regs5,
				rtl8192c_bb_vals5_92ce_92cu,
				{ 0 },
				NULL
			}
		}
	}
};

static const uint32_t rtl8188ru_agc_vals[] = {
	0x7b000001, 0x7b010001, 0x7b020001, 0x7b030001, 0x7b040001,
	0x7b050001, 0x7b060001, 0x7b070001, 0x7b080001, 0x7a090001,
	0x790a0001, 0x780b0001, 0x770c0001, 0x760d0001, 0x750e0001,
	0x740f0001, 0x73100001, 0x72110001, 0x71120001, 0x70130001,
	0x6f140001, 0x6e150001, 0x6d160001, 0x6c170001, 0x6b180001,
	0x6a190001, 0x691a0001, 0x681b0001, 0x671c0001, 0x661d0001,
	0x651e0001, 0x641f0001, 0x63200001, 0x62210001, 0x61220001,
	0x60230001, 0x46240001, 0x45250001, 0x44260001, 0x43270001,
	0x42280001, 0x41290001, 0x402a0001, 0x262b0001, 0x252c0001,
	0x242d0001, 0x232e0001, 0x222f0001, 0x21300001, 0x20310001,
	0x06320001, 0x05330001, 0x04340001, 0x03350001, 0x02360001,
	0x01370001, 0x00380001, 0x00390001, 0x003a0001, 0x003b0001,
	0x003c0001, 0x003d0001, 0x003e0001, 0x003f0001, 0x7b400001,
	0x7b410001, 0x7b420001, 0x7b430001, 0x7b440001, 0x7b450001,
	0x7b460001, 0x7b470001, 0x7b480001, 0x7a490001, 0x794a0001,
	0x784b0001, 0x774c0001, 0x764d0001, 0x754e0001, 0x744f0001,
	0x73500001, 0x72510001, 0x71520001, 0x70530001, 0x6f540001,
	0x6e550001, 0x6d560001, 0x6c570001, 0x6b580001, 0x6a590001,
	0x695a0001, 0x685b0001, 0x675c0001, 0x665d0001, 0x655e0001,
	0x645f0001, 0x63600001, 0x62610001, 0x61620001, 0x60630001,
	0x46640001, 0x45650001, 0x44660001, 0x43670001, 0x42680001,
	0x41690001, 0x406a0001, 0x266b0001, 0x256c0001, 0x246d0001,
	0x236e0001, 0x226f0001, 0x21700001, 0x20710001, 0x06720001,
	0x05730001, 0x04740001, 0x03750001, 0x02760001, 0x01770001,
	0x00780001, 0x00790001, 0x007a0001, 0x007b0001, 0x007c0001,
	0x007d0001, 0x007e0001, 0x007f0001, 0x3800001e, 0x3801001e,
	0x3802001e, 0x3803001e, 0x3804001e, 0x3805001e, 0x3806001e,
	0x3807001e, 0x3808001e, 0x3c09001e, 0x3e0a001e, 0x400b001e,
	0x440c001e, 0x480d001e, 0x4c0e001e, 0x500f001e, 0x5210001e,
	0x5611001e, 0x5a12001e, 0x5e13001e, 0x6014001e, 0x6015001e,
	0x6016001e, 0x6217001e, 0x6218001e, 0x6219001e, 0x621a001e,
	0x621b001e, 0x621c001e, 0x621d001e, 0x621e001e, 0x621f001e
};

static const struct rtwn_agc_prog rtl8188ru_agc[] = {
	{
		nitems(rtl8188ru_agc_vals),
		rtl8188ru_agc_vals,
		{ 0 },
		NULL
	}
};

#endif	/* R92CU_PRIV_H */
