#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*res;

	res = NULL;
	res = malloc(number * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, number * size);
	return (res);
}
