/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 17:54:21 by spowers           #+#    #+#             */
/*   Updated: 2020/05/26 17:57:45 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char		*ft_strndup(const char *s, size_t n)
{
	char		*str;

	str = (char *)ft_memalloc(sizeof(char) * (size_t)(n + 1));
	if (str)
		str = ft_strncpy(str, s, n);
	return (str);
}
