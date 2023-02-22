# $FreeBSD$

.include <src.opts.mk>

.if ${MK_MAILWRAPPER} != "no"
PROG=	mailwrapper
MAN=	mailwrapper.8

LIBADD=	util
.endif

.if ${MK_MAILWRAPPER} != "no" || ${MK_DMAGENT} != "no"
SYMLINKS=	../sbin/mailwrapper /usr/bin/mailq \
		../sbin/mailwrapper /usr/bin/newaliases \
		mailwrapper /usr/sbin/hoststat \
		mailwrapper /usr/sbin/purgestat

.if ${MK_MAILWRAPPER} == "no" && ${MK_DMAGENT} != "no"
SYMLINKS+=	../libexec/dma ${BINDIR}/mailwrapper
.endif

.if ${MK_MAILWRAPPER} != "no"
.if ${MK_DMAGENT} != "no"
CONFS=		${SRCTOP}/libexec/dma/dmagent/mailer.conf
.else
CONFS=		${SRCTOP}/etc/mail/mailer.conf
.endif
CONFSDIR=	/etc/mail
CONFSMODE=	644
.endif

.include <bsd.prog.mk>
