#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *c_list;
	t_list *next;

	c_list = *lst;
	while (c_list != NULL)
	{
		next = c_list->next;
		(*del)(c_list->content);
		free(c_list);
		c_list = next;
	}
	*lst = NULL;
}
