#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int n)
{
	size_t	count;
	size_t	size;

	count = 0;
	size = 0;
	if (!dest)
		return (0);
	while (src[size])
		size++;
	if (!n)
		return (size);
	while (src[count] && count < n - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (size);
}
