

#include "parsing.h"

t_list	*ft_lstnew(char *content,int t)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = content;
    node->token = t;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_front(t_list *lst, t_list *new)
{
	new->next = lst;
	lst = new;
}

t_list	*ft_last(t_list *a)
{
	while (a->next)
		a = a->next;
	return (a);
}
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *ptr;

    if (lst)
    {
        if (*lst)
        {
            ptr = ft_last(*lst);
            ptr->next = new;
        }
        else
            *lst = new;
    }
}
// void	ft_lstadd_back(t_list *lst, t_list *new)
// {
// 	t_list	*node;

// 	node = lst;
// 	if (!new)
// 		return ;
// 	if (lst)
// 	{
// 		while (node->next)
// 			node = node->next;
// 		node->next = new;
// 	}
// 	else
// 		lst = new;
// }



int	size_list(t_list *a)
{
	if (a)
		return (1 + size_list(a->next));
	else
		return (0);
}