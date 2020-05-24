/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 21:09:21 by spowers           #+#    #+#             */
/*   Updated: 2020/05/22 21:14:08 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	else
	{
		while (*s1 != '\0' && n)
		{
			if (*s1 == *s2)
			{
				while (*(s1 + i) == *(s2 + i) && n - i)
				{
					i++;
					if (*(s2 + i) == '\0')
						return ((char *)s1);
				}
			}
			n--;
			s1++;
		}
	}
	return (NULL);
}
