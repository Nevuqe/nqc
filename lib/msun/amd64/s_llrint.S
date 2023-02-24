#include <machine/asm.h>
__NQCID("$NQC$")
	
/* sizeof(long) == sizeof(long long) */
#define	fn	llrint
#include "s_lrint.S"
