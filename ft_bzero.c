#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	size_t num;

	num = 0;
	while (num < n)
	{
		((char *)b)[num] = 0;
		num++;
	}
}
