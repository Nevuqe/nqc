#include <machine/asm.h>
__NQCID("$NQC$")
	
/* sizeof(long) == sizeof(long long) */
#define	fn	llrintf
#include "s_lrintf.S"
