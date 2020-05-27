#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *list;

	if (lst == NULL)
		return (NULL);
	list = lst;
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}
