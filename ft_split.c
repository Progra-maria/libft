/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:06:00 by maricarr          #+#    #+#             */
/*   Updated: 2022/11/27 14:28:28 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*This function marks the start of the new substring, 
skipping the separator char*/
static unsigned int	ft_start(char *str, char c)
{
	unsigned int	i;

	i = 0;
	while (str[i] == c)
	i++;
	return (i);
}

/*This function marks the end of the new substring, 
erasing the separator char*/
static unsigned int	ft_end(char *str, char c)
{
	unsigned int	i;
	unsigned int	start;

	i = 1;
	start = ft_start(str, c);
	while (str[start + i] != c && str[start + i] != 0)
		i++;
	return (i);
}

/*function that counts the total number of substrings that will be generated*/
static long unsigned int	ft_countstr(const char *str, char c)
{
	unsigned long int	i;
	unsigned long int	j;
	char				*s;

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

/*function that creates the new substring */
char	*ft_strword(char *str, char c)
{
	char	*newstring;

	newstring = ft_substr(str, ft_start(str, c), ft_end(str, c));
	if (!newstring)
	{
		free(newstring);
		return (0);
	}
	return (newstring);
}

/*This function creates the string of string using malloc and 
calls the function that creates the new substrings*/
char	**ft_split(char const *s, char c)
{
	int		words;
	char	**newstring;
	char	*string;
	char	*end;
	int		i;

	words = ft_countstr(s, c);
	newstring = malloc((words + 1) * sizeof(char *));
	if (!s || !newstring)
		return (0);
	newstring[words] = 0;
	string = (char *)s;
	i = 0;
	words--;
	while (i <= words)
	{
	newstring[i] = ft_strword(string, c);
	string = &string[ft_start(string, c)];
	end = &string[ft_end(string, c)];
		while (*end == c && c != '\0')
			end++;
		string = end;
	i++;
	}
	return (newstring);
}
