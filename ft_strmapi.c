
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *s2;

    i = 0;
    if(!(s2 = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);
    while (s[i])
    {
        s2[i] = f(i, s[i]);
        i++;
    }
    s2[i] = '\0';
    return (s2);
}