/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 02:43:42 by spowers           #+#    #+#             */
/*   Updated: 2020/05/24 03:14:31 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
	if (nb == 0)
	{
		return (0);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	lete;
	int		i;

	lete = n;
	i = ft_len(lete);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (lete < 0)
	{
		str[0] = '-';
		lete = lete * -1;
	}
	while (lete > 0)
	{
		str[i] = 48 + (lete % 10);
		lete = lete / 10;
		i--;
	}
	return (str);
}
