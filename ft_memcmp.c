#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *arr1;
	const char *arr2;

	if (n == 0)
		return (0);
	arr1 = (char*)s1;
	arr2 = (char*)s2;
	while (*arr1 == *arr2)
	{
		n--;
		if (n == 0)
			return (0);
		arr1++;
		arr2++;
	}
	return ((unsigned char)*arr1 - (unsigned char)*arr2);
}
