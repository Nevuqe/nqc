/*-
 * Copyright (c) 2012 Gleb Kurtsou <gleb@frebsd.org>
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

#ifndef	_GEN_COMPAT_H_
#define	_GEN_COMPAT_H_

#include <dirent.h>

#define NQC11_DIRSIZ(dp)						\
	(sizeof(struct nqc11_dirent) - sizeof((dp)->d_name) +	\
	    (((dp)->d_namlen + 1 + 3) &~ 3))

struct nqc11_dirent;
struct nqc11_stat;
struct nqc11_statfs;

struct nqc11_dirent *nqc11_readdir(DIR *);
int	nqc11_readdir_r(DIR *, struct nqc11_dirent *,
	    struct nqc11_dirent **);
int	nqc11_stat(const char *, struct nqc11_stat *);
int	nqc11_lstat(const char *, struct nqc11_stat *);
int	nqc11_fstat(int, struct nqc11_stat *);
int	nqc11_fstatat(int, const char *, struct nqc11_stat *, int);

int	nqc11_statfs(const char *, struct nqc11_statfs *);
int	nqc11_getfsstat(struct nqc11_statfs *, long, int);
int	nqc11_getmntinfo(struct nqc11_statfs **, int);

char	*nqc11_devname(__uint32_t dev, __mode_t type);
char	*nqc11_devname_r(__uint32_t dev, __mode_t type, char *buf, int len);

#endif /* _GEN_COMPAT_H_ */
