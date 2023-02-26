# $NQC$

SRCS+=	amd64_tramp.S \
	start.S \
	elf64_nqc.c \
	trap.c \
	multiboot2.c \
	exc.S

.PATH:	${BOOTSRC}/i386/libi386
SRCS+=	nullconsole.c \
	comconsole.c \
	spinconsole.c

CFLAGS+=	-fPIC
LDFLAGS+=	-Wl,-znocombreloc
