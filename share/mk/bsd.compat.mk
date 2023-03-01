# $FreeBSD$

.if !targets(__<${_this:T}>__)
__<${_this:T}>__:

.if defined(_LIBCOMPAT)
COMPAT_ARCH?=	${TARGET_ARCH}
COMPAT_CPUTYPE?= ${CPUTYPE_${_LIBCOMPAT}}
.if (defined(WANT_COMPILER_TYPE) && ${WANT_COMPILER_TYPE} == gcc) || \
    (defined(X_COMPILER_TYPE) && ${X_COMPILER_TYPE} == gcc)
COMPAT_COMPILER_TYPE=	gcc
.else
COMPAT_COMPILER_TYPE=	clang
.endif
.else
COMPAT_ARCH=	${MACHINE_ARCH}
COMPAT_CPUTYPE=	${CPUTYPE}
.include <bsd.compiler.mk>
COMPAT_COMPILER_TYPE=${COMPILER_TYPE}
.endif

# -------------------------------------------------------------------
# In the program linking case, select LIBCOMPAT
.if defined(NEED_COMPAT)
.ifndef HAS_COMPAT
.warning NEED_COMPAT defined, but no LIBCOMPAT is available (COMPAT_ARCH == ${COMPAT_ARCH})
.elif !${HAS_COMPAT:M${NEED_COMPAT}} && ${NEED_COMPAT} != "any"
.error NEED_COMPAT (${NEED_COMPAT}) defined, but not in HAS_COMPAT (${HAS_COMPAT})
.elif ${NEED_COMPAT} == "any"
.endif
.ifdef WANT_COMPAT
.error Both WANT_COMPAT and NEED_COMPAT defined
.endif
WANT_COMPAT:=	${NEED_COMPAT}
.endif

.if defined(HAS_COMPAT) && defined(WANT_COMPAT)
.if ${WANT_COMPAT} == "any"
_LIBCOMPAT:=	${HAS_COMPAT:[1]}
.else
_LIBCOMPAT:=	${WANT_COMPAT}
.endif
.endif

# -------------------------------------------------------------------
# Generic code for each type.
# Set defaults based on type.
libcompat=	${_LIBCOMPAT:tl}
_LIBCOMPAT_MAKEVARS=	_OBJTOP TMP CPUFLAGS CFLAGS CXXFLAGS LDFLAGS \
			_MACHINE _MACHINE_ARCH _MACHINE_ABI \
			WMAKEENV WMAKEFLAGS WMAKE WORLDTMP
.for _var in ${_LIBCOMPAT_MAKEVARS}
.if !empty(LIB${_LIBCOMPAT}${_var})
LIBCOMPAT${_var}?=	${LIB${_LIBCOMPAT}${_var}}
.endif
.endfor

WORLDTMP?=		${SYSROOT}

# Shared flags
LIBCOMPAT_OBJTOP?=	${OBJTOP}/obj-lib${libcompat}

LIBCOMPATCFLAGS+=	${LIBCOMPATCPUFLAGS} \
			--sysroot=${WORLDTMP} \
			${BFLAGS}

LIBCOMPATLDFLAGS+=	-L${WORLDTMP}/usr/lib${libcompat}

LIBCOMPATWMAKEENV+=	MACHINE=${LIBCOMPAT_MACHINE}
LIBCOMPATWMAKEENV+=	MACHINE_ARCH=${LIBCOMPAT_MACHINE_ARCH}

.if defined(WANT_COMPAT)
LIBDIR_BASE:=	/usr/lib${libcompat}
LIBDATADIR:=	/usr/lib${libcompat}
_LIB_OBJTOP=	${LIBCOMPAT_OBJTOP}
CFLAGS+=	${LIBCOMPATCFLAGS}
LDFLAGS+=	${CFLAGS} ${LIBCOMPATLDFLAGS}
MACHINE=	${LIBCOMPAT_MACHINE}
MACHINE_ARCH=	${LIBCOMPAT_MACHINE_ARCH}
.endif

.endif
