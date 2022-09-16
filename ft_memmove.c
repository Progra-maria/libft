/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:01:47 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/16 21:39:55 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*This function copies len bytes from string src to string dst.  The two strings may
     overlap; the copy is always done in a non-destructive manner.*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	
	i = 0;
	
	if (!dst || !src)
		return (0);
	else
	{
		while (len-- && src)
			*((unsigned char *)dst++) = *((unsigned char *)src++);
		return (dst);
	}
}
