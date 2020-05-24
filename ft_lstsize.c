/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 04:16:15 by spowers           #+#    #+#             */
/*   Updated: 2020/05/24 04:36:58 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		result;
	t_list	*current;

	if (lst == NULL)
		return (0);
	result = 0;
	current = lst;
	while (current != NULL)
	{
		result++;
		current = current->next;
	}
	return (result);
}
