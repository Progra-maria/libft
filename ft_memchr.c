/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:33:46 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/20 19:40:56 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char chr;
	str = (unsigned char *)s; 
	chr = (unsigned char) c;
	while(n--)
	{
		if (*str++ == chr)
			return ((void *)(str -1)) ;
		}
	return (NULL);
}
