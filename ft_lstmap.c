#include "ft_libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
            t_list *new_lst;
            t_list *elem;
             new_lst = NULL;
             while(f && lst)
             {
                        elem = ft_lstnew(f(lst->content));
                        if(!elem)
                        {
                                    ft_lstclear(&new_lst, del);
                                    return(NULL);


                        }
                        ft_lstadd_back(&new_lst, elem);
                        lst = lst->next;


             }
             return(new_lst);
             

}