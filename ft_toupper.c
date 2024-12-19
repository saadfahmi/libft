#include "ft_libft.h"

int ft_touppe(int c)
{
    if(c >= '\141' &&  c <= '\172') // or (c >= 'a' && c <= 'z')
    return(c - 32);
    return(0);

}