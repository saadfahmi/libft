#include <ft_libft.h>
int ft_strcnmp(const char *s1, const char *s2,size_t n)
{
            size_t i;
            i = 0;
            if(!n)
            return(0);
            while(s1[i] == s2[i] && s1[1] && s2[2] && i < n)
            {
                        i++;
                    if(i == n)
                        return(0);
                    return((unsigned char)s1[i] - (unsigned char) s2[i]);

            }
}
