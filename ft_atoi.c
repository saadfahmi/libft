#include "ft_libft.h"

int ft_atoi(const char *str)
{

    int i = 0;
    int sign = 1;

    
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    if (*str == '-' || *str == '+') 
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9') 
    {
        i = i * 10 + (*str - '0');
        str++;
    }


    return i * sign;
}
