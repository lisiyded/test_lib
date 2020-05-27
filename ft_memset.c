#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char *dstb;

	dstb = (char*)b;
	while (len > 0)
	{
		*dstb = (char)c;
		len--;
		dstb++;
	}
	return (b);
}
