#include "ft_libft.h"
 void ft_lstaddback(t_list **lst, t_list *new)
 {
        t_list *tmp;
        if(!lst || !new)
        return ;
        tmp = *lst;
        if(*lst)
        {
                while(tmp->next)
                tmp = tmp->next;
                tmp->next = new;

        }
        else
            *lst = new;


 }



    