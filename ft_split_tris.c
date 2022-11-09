#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*this function function calculates the length of a given string*/
unsigned long int	ft_strlen(const char *str)
{
	unsigned long int	i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}


/*stacks memory for a new string and returns a subtring of s that starts in 
 * start and lenghts len positions)*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 1;
	if (len > (size_t)ft_strlen(s))
		len = (size_t)ft_strlen(s);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

static unsigned int ft_start(char *str, char c)
{   
    unsigned int    i;
    
    i = 0;
    while (str[i] == c)
            i++;
    return (i);
}

static unsigned int    ft_end(char *str, char c)
{
    unsigned int    i;
    unsigned int    start;

    i = 1;
    start = ft_start(str, c);
    while (str[start + i] != c)
            i++;
    return i;
}

/*function that counts the total number of substrings that will be generated*/
static long unsigned int ft_countstr(const char *str, char c)
{
    unsigned long int   i;
    unsigned long int   j;
    char                *s;

    i = 0;
    j = 0;
    s = (char *)str;
    while (s[i])
    {
        if ((s[i] != c && s[i +1] == c) || (s[i] != c && s[i + 1] == '\0'))
            j++;
        i++;    
    }
    return (j);
}

char **ft_split(char const *s, char c)
{
    int    words;
    char            **newstring;
    char            *string;
    char            *end;

    words = ft_countstr(s, c);
    newstring = malloc((words + 1) * sizeof(char *));
    if (!s || !newstring)
        return (0);
    newstring[words] = NULL;
    string = (char *)s;
    words--;
    while (words >= 0)
    {
    newstring[words] = ft_substr(string, ft_start(string, c), ft_end(string, c));
    if (!newstring[words])
        {
        free(*newstring);
        return (NULL);
        }
        string = &string[ft_start(string, c)];
        end = &string[ft_end(string, c)];
        words--;
        while (*end == c)
            end++;
        if (end)
        string = end;
    }
    return (newstring);
}

int main(void)
{
    
	char    **result = ft_split("    a b c             ", ' ');
    long unsigned int i;

    i = 0;
    while (i <= ft_countstr("    a b c             ", ' ')  && *result)
    printf("%s\n",result[i++]);
    return (0);
}