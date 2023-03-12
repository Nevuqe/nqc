# $NQC$

.PATH: ${SRCTOP}/sys/contrib/openzfs/lib/libzfs_core
.PATH: ${SRCTOP}/sys/contrib/openzfs/include
.PATH: ${SRCTOP}/sys/contrib/openzfs/include/os/nqc/zfs
.PATH: ${SRCTOP}/sys/contrib/openzfs/module/os/nqc/zfs


LIB=	zfs_core
LIBADD=	nvpair spl zutil
PACKAGE=	zfs

INCS=	libzfs_core.h
SRCS=	libzfs_core.c \
	os/nqc/libzfs_core_ioctl.c \
	zfs_ioctl_compat.c

WARNS?=	2
CSTD=	c99
CFLAGS+= -DIN_BASE
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/include
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/lib/libzfs_core/common
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/lib/libspl/include/
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/lib/libspl/include/os/nqc
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/include/os/nqc/zfs
CFLAGS+= -I${SRCTOP}/sys
CFLAGS+= -I${SRCTOP}/cddl/compat/opensolaris/include
CFLAGS+= -I${SRCTOP}/sys/contrib/openzfs/module/icp/include
CFLAGS+= -include ${SRCTOP}/sys/contrib/openzfs/include/os/nqc/spl/sys/ccompile.h
CFLAGS+= -DHAVE_ISSETUGID
CFLAGS+= -include ${SRCTOP}/sys/modules/zfs/zfs_config.h

.include <bsd.lib.mk>
