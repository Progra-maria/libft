/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:59:01 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/16 20:21:06 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*This function copies n bytes from memory area src to memory area dst.
If dst and src overlap, behavior is undefined.*/

char	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	if (!dst || !src)
		return (0);
	else
	{
		while (n--)
			*((unsigned char *)dst++) = *((unsigned char *)src++);
		return (dst);
	}
}

