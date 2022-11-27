/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:33:46 by maricarr          #+#    #+#             */
/*   Updated: 2022/10/11 12:34:36 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function locates the first occurrence of c (casted to an unsigned char)
 * in string s and returns a pointer to the byte located, or NULL if there is no
 * occurrenece whithin n bytes*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;

	str = (unsigned char *)s;
	chr = (unsigned char) c;
	while (n--)
	{
		if (*str++ == chr)
			return ((void *)(str -1));
	}
	return (NULL);
}
