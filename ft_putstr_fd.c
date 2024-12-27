#include "ft_libft.h"
void ft_putstr_fd(char *s, int fd)
{
            if(!s)
            return(0);
            while(*s)
            ft_putchar_fd(*(s++), fd);
            
}
