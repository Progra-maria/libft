
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:06:00 by maricarr          #+#    #+#             */
/*   Updated: 2022/10/17 19:19:54 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

// unsigned long int	ft_strlen(const char *str)
// {
// 	unsigned long int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 	i++;
// 	}
// 	return (i);
// }

// static  int ft_chrcmp(const char *str, char c)
// {
//     while(*str)
//     {
//         if (*str == c)
//             return (1);
//         str++;
//     }
//     return (0);
// }
/*stacks memory for a new string and returns a subtring of s that starts in 
 * start and lenghts len positions)*/
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*str;

// 	i = 1;
// 	if (len > (size_t)ft_strlen(s))
// 		len = (size_t)ft_strlen(s);
// 	str = (char *)malloc(sizeof(*s) * (len + 1));
// 	if (!str)
// 		return (0);
// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 		{
// 			str[j] = s[i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	str[j] = 0;
// 	return (str);
// }
/*This function allocates and returns the trimmed string*/
// char *ft_strtrim(char const *s1, char const *set)
// {
//     //char    *newstr;
//     char    *start;
//     int     end;

// 	if (ft_strlen(set) == 0)
// 		return (ft_substr(s1, 0, ft_strlen(s1) + 1));
//     if(ft_strlen(s1) == 0)
//         return (ft_substr(s1, 0, 1));
//     while(s1)
//         {
//             if (ft_chrcmp(set, *s1))
//                     s1++;
//             else
//                 break;
//         }
//     start = (char *)s1;
//     end = ft_strlen(start) - 1;
//     while (s1)
//     {
//         if (ft_chrcmp(set, s1[end]))
//             end--;
//         else
//             break;
//     }
//     return (ft_substr(start, 0, end + 1));
// }

static char    *ft_strrcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
    size_t  j;

	i = dstsize - 1;
    j = i - 1;
	if (i > 0)
	{
        dst[i] = 0;
		while (src[i] && i > 0)
		{
			dst[j] = src[i];
			i--;
            j--;
		}
	}
	return (dst);
}



/*Function that counts the chars to be removed*/
static  long unsigned int ft_countchr(const char *str, char c)
{
	long unsigned int	i;
    long unsigned int   j;

	i = 0;
    j = 0;
    while(*str)
    {
        if (*str++ == c)
            i++;	
    }
    return (i);
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

// /*function that calculates the length of the string we want to create*/
static unsigned long int ft_countltr(char *str, char c)
{	
	unsigned long int	i;
    unsigned long int	j;

	i = ft_strlen(str);
    j = 0;
	while (i > 0)
	{
		if ((str[i--] != (unsigned char)c))
            j++;
        else
        break;
	}
	return (j);
}
static char *ft_strncpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (--dstsize && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (dst);
}

static void *ft_freestr(char **string)
{
    size_t i;

    i = 0;
    while (string[i])
    {
        free(string[i]);
            i++;
    }
    free(string);
    return (NULL);
}

char **ft_split(char const *s, char c)
{
    long unsigned int   t_len;
    long int   strnb;
    char                *ptr;
    char                **newstring;
    long unsigned int   wlen;

    ptr = (char *)ft_strtrim(s, &c);
    t_len = ft_strlen(ptr) - ft_countchr(ptr, c);
    strnb = ft_countstr(ptr, c);
    if (!ft_strncmp(ptr, "", ft_strlen(ptr)))
        strnb = -1;
    newstring = malloc((strnb + 1) * sizeof(char *));
    if (!newstring)
        return (0);
    newstring[strnb] = malloc(1 * sizeof(char));
    if (!newstring[strnb])
        return (0);
    newstring[strnb] = "";
        strnb--;
    
    while (strnb > 0)
    {   
        wlen = ft_countltr(ptr, c);
        newstring[strnb] = malloc(ft_countltr(ptr, c) * sizeof(char));
        if (!newstring)
            return (NULL);
        *newstring[strnb] = *ft_strrcpy(newstring[strnb], &ptr[ft_strlen(ptr) - wlen], wlen);
        ptr[ft_strlen(ptr) - wlen] = 0;
        ptr = ft_strtrim(ptr, &c);
        strnb--;
    }
    if(strnb == 0)
    {
        newstring[0] = malloc(ft_countltr(ptr, c) * sizeof(char));
        if (!newstring){
            ft_freestr(newstring);
            return (NULL);
        }
        *newstring[0] = *ft_strncpy(*newstring, ptr, ft_strlen(ptr) + 1);
    }
    return(newstring);
}

int main(void)
{
    
	char    **result = ft_split("      split       this for   me  !       ", ' ');
    long int i;

    i = ft_countstr("      split       this for   me  !       ", ' ');
    while (i >= 0)
    printf("%s\n",result[i--]);
    return (0);
}
