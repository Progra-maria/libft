
#include "libft.h"
#include <stdio.h>
/*This funcytion eserves (with malloc(3)) and returns a new
string, formed by the concatenation of 's1' and
's2'.*/
char *ft_strjoin(char const *s1, char const *s2)
{
    char    *newstr;
    size_t  len;

    len = (ft_strlen(s1) + ft_strlen(s2) + 1);
    if (len > 0xffffffff)
        len = (0xffffffff - (size_t)1);
    newstr = ft_calloc(len, sizeof(char));
    if (!newstr)
         return (NULL);
    ft_strlcat(newstr, s1, (ft_strlen(s1) + 1));
    ft_strlcat(newstr, s2, (len + ft_strlen(s1)));
    return (newstr);
}

