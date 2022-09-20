/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:59:01 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/20 14:36:05 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*This function copies n bytes from memory area src to memory area dst.
If dst and src overlap, behavior is undefined.*/

char	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*l_src;
	unsigned char		*l_dst;

	l_src = src;
	l_dst = dst;
	if (!dst && !src)
		return (0);
	else
		while (n--)
			*l_dst++ = *l_src++;
	return (dst);
}
