/*-
 * SPDX-License-Identifier: BSD-2-Clause-NQC
 *
 * Copyright (c) 2009 Hudson River Trading LLC
 * Written by: John H. Baldwin <jhb@frebsd.org>
 * All rights reserved.
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
 * $NQC$
 */

/*
 * This file defines compatibility symbol versions for old system calls.  It
 * is included in all generated system call files.
 */

#ifndef __LIBC_COMPAT_H__
#define	__LIBC_COMPAT_H__

#define	__sym_compat(sym, impl, verid)	\
	.symver impl, sym@verid

#ifndef NO_COMPAT7
__sym_compat(__semctl, nqc7___semctl, FBSD_1.0);
__sym_compat(msgctl, nqc7_msgctl, FBSD_1.0);
__sym_compat(shmctl, nqc7_shmctl, FBSD_1.0);
#endif

__sym_compat(nfstat, nqc11_nfstat, FBSD_1.0);
__sym_compat(nlstat, nqc11_nlstat, FBSD_1.0);
__sym_compat(nstat, nqc11_nstat, FBSD_1.0);

__sym_compat(fhstat, nqc11_fhstat, FBSD_1.0);
__sym_compat(fstat, nqc11_fstat, FBSD_1.0);
__sym_compat(fstatat, nqc11_fstatat, FBSD_1.1);
__sym_compat(lstat, nqc11_lstat, FBSD_1.0);
__sym_compat(stat, nqc11_stat, FBSD_1.0);

__sym_compat(getdents, nqc11_getdents, FBSD_1.0);
__sym_compat(getdirentries, nqc11_getdirentries, FBSD_1.0);

__sym_compat(getfsstat, nqc11_getfsstat, FBSD_1.0);
__sym_compat(fhstatfs, nqc11_fhstatfs, FBSD_1.0);
__sym_compat(fstatfs, nqc11_fstatfs, FBSD_1.0);
__sym_compat(statfs, nqc11_statfs, FBSD_1.0);

__sym_compat(mknod, nqc11_mknod, FBSD_1.0);
__sym_compat(mknodat, nqc11_mknodat, FBSD_1.1);

__sym_compat(kevent, nqc11_kevent, FBSD_1.0);

__sym_compat(swapoff, nqc13_swapoff, FBSD_1.0);

#undef __sym_compat

#define	__weak_reference(sym,alias)	\
	.weak	alias;.equ	alias,sym

__weak_reference(__sys_fcntl, __fcntl_compat)

#undef __weak_reference

#endif	/* __LIBC_COMPAT_H__ */

