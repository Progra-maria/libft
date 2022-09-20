/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:05:48 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/20 16:14:46 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	c = (unsigned char)c;
	while (*str != c)
	{
		if (*str == 0 || !(ft_isascii(c)))
			return (NULL);
		str++;
	}
	return (str);
}
