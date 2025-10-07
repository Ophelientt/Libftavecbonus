#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *lastnode;
    
        lastnode = ft_lstlast (*lst);

        if (lastnode == NULL)
            *lst = new;

        lastnode -> next = new;
        new -> next = NULL;
}
/*
int main()
{
    return 1;
}
*/    