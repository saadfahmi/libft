#include "ft_libft.h"
char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{   
    char *ret;
    int len;
    int i;
    if(!s || !f)
        return(NULL);
    len = ft_strlen(s);
    ret = malloc(sizeof(char) * (len + 1));
    i = 0;
    if(!ret)
        return(NULL);
    while(s[i])
    {
            ret[i] = f(i, s[i]);
            i++;
    }

    ret[i] = '\0';
    return(ret);



}
