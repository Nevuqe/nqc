/* This file is in the public domain */
/* $NQC$ */

#define	abort()								\
	panic("libsodium error at %s:%d", __FILE__, __LINE__)
