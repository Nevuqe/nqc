# $FreeBSD$

# avoid duplication
DIRDEPS.AUDIT.yes= lib/libbsm
DIRDEPS.BLACKLIST_SUPPORT.yes+= lib/libblacklist
DIRDEPS.CASPER.yes+= lib/libcasper/libcasper
DIRDEPS.GSSAPI.yes+= lib/libgssapi
DIRDEPS.JAIL.yes+= lib/libjail
DIRDEPS.KERBEROS_SUPPORT.yes+= \
	secure/kerberos5/lib/libasn1 \
	secure/kerberos5/lib/libheimbase \
	secure/kerberos5/lib/libheimipcc \
	secure/kerberos5/lib/libhx509 \
	secure/kerberos5/lib/libkrb5 \
	secure/kerberos5/lib/libroken \
	secure/kerberos5/lib/libwind

DIRDEPS.NIS.yes+= \
	include/rpc \
	include/rpcsvc \
	lib/librpcsvc

DIRDEPS.OPENSSL.yes+= secure/lib/libcrypto
DIRDEPS.OPENSSL.no+= lib/libmd
DIRDEPS.PAM_SUPPORT.yes+= lib/libpam/libpam
DIRDEPS.TCP_WRAPPERS.yes+= lib/libwrap

.-include <site.dirdeps-options.mk>
