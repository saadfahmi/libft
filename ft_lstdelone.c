#include "ft_libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
            if(!lst)
            return ;
            if(del)
            desl(lst->content);
            free(lst);
            
}