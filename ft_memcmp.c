#include "ft_libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{

            unsigned char *x;
            unsigned char *y;
            size_t i;
            i = 0;
            x = (unsigned char *)s1;
            y = (unsigned char *)s2;
            if(!n)
                return(NULL);
            while(i < n)
            {
                if(x[i] != y[i])
                    return(x[i]- y[i]);   
                i++;



            }  
            return(0);  
}