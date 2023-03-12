/*-
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * Copyright (c) 2011 Ed Schouten <ed@FreeBSD.org>
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

#include <sys/cdefs.h>
__NQCID("$NQC$");

#include <pthread.h>

#include "threads.h"

int
tss_create(tss_t *key, tss_dtor_t dtor)
{

	if (pthread_key_create(key, dtor) != 0)
		return (thrd_error);
	return (thrd_success);
}

void
tss_delete(tss_t key)
{

	(void)pthread_key_delete(key);
}

void *
tss_get(tss_t key)
{

	return (pthread_getspecific(key));
}

int
tss_set(tss_t key, void *val)
{

	if (pthread_setspecific(key, val) != 0)
		return (thrd_error);
	return (thrd_success);
}

_Static_assert(TSS_DTOR_ITERATIONS == PTHREAD_DESTRUCTOR_ITERATIONS,
    "TSS_DTOR_ITERATIONS must be identical to PTHREAD_DESTRUCTOR_ITERATIONS");
