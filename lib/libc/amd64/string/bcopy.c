/*-
 * Public domain.
 */

#include <sys/cdefs.h>
__NQCID("$NQC$");

#include <string.h>

void
bcopy(const void *src, void *dst, size_t len)
{

	memmove(dst, src, len);
}
