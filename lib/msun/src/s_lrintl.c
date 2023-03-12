#include <sys/cdefs.h>
__NQCID("$FreeBSD$");

#define type		long double
#define	roundit		rintl
#define dtype		long
#define	fn		lrintl

#include "s_lrint.c"
