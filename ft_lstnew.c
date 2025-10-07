#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *node;
    t_list  *lst;

    node = malloc (sizeof (t_list));
    if (!node)
        return (NULL);
    node -> content = content;
    node -> next = NULL;

    lst = node;
    return (lst);
}