#include "ft_libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
            while(f && lst)
            {
                    f(lst->content);
                    lst = lst->next;
                    
            }


}