/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 02:35:22 by spowers           #+#    #+#             */
/*   Updated: 2020/05/26 18:03:22 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_count(char const *s, char c)
{
	unsigned int		i;
	int		count;

	i = 0;
	count = 1;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static char		**check_tab(char **tab, size_t tab_size)
{
	size_t		i;

	i = 0;
	if (tab)
	{
		while (i < tab_size)
		{
			if (!tab[i])
			{
				ft_strarr_del(tab, tab_size);
				return (NULL);
			}
			i++;
		}
	}
	return (tab);
}

char			**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		tab_i;

	tab = NULL;
	tab_i = 0;
	if (s && c)
	{
		if ((tab = (char **)ft_memalloc(sizeof(char *) * (ft_count(s, c)))))
		{
			while (*s)
			{
				i = 0;
				while ((char)*s == c)
					s++;
				while (*(s + i) && (char)*(s + i) != c)
					i++;
				if (i > 0)
					tab[tab_i++] = ft_strndup(s, i);
				s++;
			}
			tab[tab_i] = NULL;
		}
	}
	return (check_tab(tab, tab_i));
}
