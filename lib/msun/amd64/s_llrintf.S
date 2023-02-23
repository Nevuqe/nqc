#include <machine/asm.h>
__FBSDID("$NQC$")
	
/* sizeof(long) == sizeof(long long) */
#define	fn	llrintf
#include "s_lrintf.S"
