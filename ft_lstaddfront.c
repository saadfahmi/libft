        #include "ft_libft.h"

        void ft_lstaddfront(t_list **lst, t_list *new)
    {

                if(lst && new)
                new->next = *lst;
                if(new)
                *lst = new;
    }