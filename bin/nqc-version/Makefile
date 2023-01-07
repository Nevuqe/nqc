# $FreeBSD$

PACKAGE=runtime
SCRIPTS = nqc-version
MAN = nqc-version.1
CLEANFILES = nqc-version nqc-version.sh
NEWVERS = ${SRCTOP}/sys/conf/newvers.sh

nqc-version.sh: ${.CURDIR}/nqc-version.sh.in ${NEWVERS}
	eval $$(sh ${NEWVERS} -v); \
	if ! sed -e "\
			s/@@TYPE@@/$${TYPE}/g; \
			s/@@REVISION@@/$${REVISION}/g; \
			s/@@BRANCH@@/$${BRANCH}/g; \
		" ${.CURDIR}/nqc-version.sh.in >${.TARGET} ; then \
		rm -f ${.TARGET} ; \
		exit 1 ; \
	fi

.include <bsd.prog.mk>
