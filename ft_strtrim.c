/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:22:30 by maricarr          #+#    #+#             */
/*   Updated: 2022/11/25 20:19:47 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*this function compares the s1 cahracters with set characters one by one, 
returning 1 if there is a conicidence, 0 if not*/
static int	ft_chrcmp(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

/*This function allocates and returns the trimmed string*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	int		end;

	if (ft_strlen(set) == 0)
		return (ft_substr(s1, 0, ft_strlen(s1) + 1));
	if (ft_strlen(s1) == 0)
		return (ft_substr(s1, 0, 1));
	while (s1)
	{
		if (ft_chrcmp(set, *s1))
			s1++;
		else
			break ;
	}
	start = (char *)s1;
	end = ft_strlen(start) - 1;
	while (s1)
	{
		if (ft_chrcmp(set, s1[end]))
			end--;
		else
			break ;
	}
	return (ft_substr(start, 0, end + 1));
}
