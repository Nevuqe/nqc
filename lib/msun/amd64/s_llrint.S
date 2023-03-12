#include <machine/asm.h>
__NQCID("$FreeBSD$")
	
/* sizeof(long) == sizeof(long long) */
#define	fn	llrint
#include "s_lrint.S"
