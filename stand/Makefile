# $FreeBSD$

.include <src.opts.mk>

S.yes+=			libsa

S.${MK_LOADER_OFW}+=	libofw
S.${MK_FDT}+=		fdt

S.${MK_FORTH}+=		ficl
S.${MK_FORTH}+=		forth
S.${MK_LOADER_LUA}+=	liblua
S.${MK_LOADER_LUA}+=	lua
S.yes+=			defaults
S.yes+=			fonts
S.yes+=			images
S.yes+=			man

.if ${MK_FORTH} != "no"
INTERP_DEPENDS+=	forth
.endif
.if ${MK_LOADER_LUA} != "no"
INTERP_DEPENDS+=	lua
.endif

.include <bsd.arch.inc.mk>

S.${MK_EFI}+=		efi
.if ${MK_FDT} != "no"
S.${MK_LOADER_KBOOT}+=	kboot
.endif
S.${MK_LOADER_UBOOT}+=	uboot

.if exists(${.CURDIR}/${MACHINE}/.)
S.yes+=         ${MACHINE}
SUBDIR_DEPEND_${MACHINE}+=	${INTERP_DEPENDS}
.if ${MK_FDT} != "no"
SUBDIR_DEPEND_${MACHINE}+=	fdt
.endif
.if ${MK_LOADER_UBOOT} != "no"
SUBDIR_DEPEND_${MACHINE}+=	uboot
.endif
.if ${MK_LOADER_OFW} != "no"
SUBDIR_DEPEND_${MACHINE}+=	libofw
.endif
.endif

# Build the actual subdir list from S.yes, adding in the 32-bit
# variant if necessary.
.for _x in ${S.yes}
SUBDIR+=${_x}
.if ${_x} != "libsa"
SUBDIR_DEPEND_${_x}+=	libsa
.endif
.endfor

# Remaining dependencies
SUBDIR_DEPEND_forth+=	ficl
SUBDIR_DEPEND_lua+=	liblua

SUBDIR_DEPEND_efi+=	${INTERP_DEPENDS}
SUBDIR_DEPEND_kboot+=	${INTERP_DEPENDS}
.if ${MK_FDT} != "no"
SUBDIR_DEPEND_efi+=	fdt
SUBDIR_DEPEND_kboot+=	fdt
.endif

SUBDIR_DEPEND_uboot+=	${INTERP_DEPENDS}
.if ${MK_FDT} != "no"
SUBDIR_DEPEND_uboot+=	fdt
.endif

SUBDIR_PARALLEL=	yes

.include <bsd.subdir.mk>

# Simplified way to build-test the most important build combinations for the
# loader.
universe:
	sh ${SRCTOP}/tools/boot/universe.sh
