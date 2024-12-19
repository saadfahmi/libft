#include "ft_libft.h"
size_t ft_strlen(const char *p)
{
    int i;
    i = 0;
    while(p[i] != 0)
    {
        i++;

    }
    return(i);
    

}