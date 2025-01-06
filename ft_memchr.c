#include "ft_libft.h"
#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{   
    while(n--)
    {
            if(*(unsigned char *) s == (unsigned char)c)
            return((void *)s);
            s++;
    }
        return(0);
}
int main()
{
            char str[] = "Hello World";
            char *result = ft_memchr(str, 'H', 11);

            if (result != NULL)
                printf("Found: %c\n", *result);
            else
                printf("Character not found.\n");


        return 0;
}