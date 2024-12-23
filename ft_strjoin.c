#include "ft_libft.h"
char *ft_strjoin(char const *s1, const char *s2)
{
        size_t s1_len;
        size_t s2_len;
        size_t i;
        size_t j;
        size_t total_len;
        char *new_str;
        s1_len = strlen(s1);
        s2_len = strlen(s2);
        total_len = s1_len + s2_len;
        new_str = (char *)malloc(sizeof(char) *(total_len + 1));
        i = 0;
        j = 0;
        if(new_str = NULL)
        return(NULL);
        while(s1_len> i)
        {
            new_str[i] = s1[i];
            i++;

        }
        while(s2_len > j)
        {
            new_str[j] = s2[j];
            j++;

        }
        new_str = '\0';
        return(new_str);





}