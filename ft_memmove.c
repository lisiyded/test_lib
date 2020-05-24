/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 23:49:59 by spowers           #+#    #+#             */
/*   Updated: 2020/05/21 23:50:06 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (char*)dst;
	csrc = (char*)src;
	if (cdst == NULL && csrc == NULL)
		return (NULL);
	if (cdst < csrc)
		while (len > 0)
		{
			*cdst = *csrc;
			cdst++;
			csrc++;
			len--;
		}
	else
		while (len > 0)
		{
			*(cdst + len - 1) = *(csrc + len - 1);
			len--;
		}
	return (dst);
}
