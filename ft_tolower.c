#include "ft_libft.h"
int ft_tolower(int c)
{
    char new_value;
    if( c >= 65 && c <= 90)
    {
    return(c + 32);

    }
   return 0;
}