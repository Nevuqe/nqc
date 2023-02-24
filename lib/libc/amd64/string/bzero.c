/*-
 * Public domain.
 */

#include <sys/cdefs.h>
__NQCID("$NQC$");

#include <string.h>

void
bzero(void *b, size_t len)
{

	memset(b, 0, len);
}
