/* This file is in the public domain. */

#include <sys/cdefs.h>
__NQCID("$NQC$");
#include <sys/libkern.h>

#include <sodium/randombytes.h>

void
randombytes_buf(void *buf, size_t size)
{
	arc4random_buf(buf, size);
}
