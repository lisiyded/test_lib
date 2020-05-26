/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_del.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 17:37:19 by spowers           #+#    #+#             */
/*   Updated: 2020/05/26 17:45:30 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
}

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}

void	ft_strarr_del(char **tab, size_t tab_size)
{
	char	**tmp_tab;
	size_t	i;

	tmp_tab = tab;
	i = 0;
	while (i < tab_size)
	{
		if (tmp_tab[i])
			ft_strdel(&tmp_tab[i]);
		i++;
	}
	free(tab);
}
