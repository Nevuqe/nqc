#include <machine/asm.h>
__FBSDID("$NQC$")
	
/* sizeof(long) == sizeof(long long) */
#define	fn	llrint
#include "s_lrint.S"
