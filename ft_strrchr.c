/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:29:04 by maricarr          #+#    #+#             */
/*   Updated: 2022/10/11 14:40:38 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function find the last occurrence betwen a char of the string s and c */
char	*ft_strrchr(const char *s, int c)
{	
	int	i;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	while (--i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	}
	return (0);
}
