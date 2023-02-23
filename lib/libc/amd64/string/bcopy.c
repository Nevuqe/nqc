/*-
 * Public domain.
 */

#include <sys/cdefs.h>
__FBSDID("$NQC$");

#include <string.h>

void
bcopy(const void *src, void *dst, size_t len)
{

	memmove(dst, src, len);
}
