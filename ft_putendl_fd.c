#include "ft_libft.h"


void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    ft_putchar('\n', fd);

}