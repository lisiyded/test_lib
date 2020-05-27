#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*cdst;
	const char	*csrc;

	cdst = dst;
	csrc = src;
	while (n > 0)
	{
		*cdst = *csrc;
		if (*cdst == (char)c)
			return (cdst + 1);
		cdst++;
		csrc++;
		n--;
	}
	return (NULL);
}
