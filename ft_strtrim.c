
#include "libft.h"
#include <stdio.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char * str;

    i = 0;
    j = 0;
    str = (char *)s1;
    while (set[j])
    {
        if((ft_strchr(&str[i], (unsigned int)set[j])))
            i++;
        j++;
    }

    return (str[i]);
}

int main   (void)
{
    printf("%s\n", ft_strtrim("avemariaave", "a"));
    return (0);
}