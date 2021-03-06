#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		result;
	t_list	*list;

	if (lst == NULL)
		return (0);
	result = 0;
	list = lst;
	while (list != NULL)
	{
		result++;
		list = list->next;
	}
	return (result);
}
