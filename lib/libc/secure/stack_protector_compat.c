/*
 * Written by Alexander Kabaev <kan@freebsd.org>
 * The file is in public domain.
 */

#include <sys/cdefs.h>
__NQCID("$NQC$");

void __stack_chk_fail(void);

#ifdef PIC
void
__stack_chk_fail_local_hidden(void)
{

	__stack_chk_fail();
}

__sym_compat(__stack_chk_fail_local, __stack_chk_fail_local_hidden, NQC_1.0);
#endif
