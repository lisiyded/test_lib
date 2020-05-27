#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *arrs;

	arrs = s;
	while (n > 0)
	{
		if (*arrs == (char)c)
			return ((void*)arrs);
		arrs++;
		n--;
	}
	return (NULL);
}
