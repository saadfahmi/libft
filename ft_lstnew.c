#include "ft_libft.h"

t_list *ft_lstnew(void *content)
{
            t_list *new;
            new = malloc(sizeof(t_list));
            new->next = NULL;
            new->content = content;
            return(new);

}