/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:01:47 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/20 14:35:36 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/*This function copies len bytes from string src to string dst.The two strings 
 * may overlap; the copy is always done in a non-destructive manner.*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*l_src;
	unsigned char		*l_dst;

	l_src = src;
	l_dst = dst;
	if (l_src < l_dst)
		while (len--)
			l_dst[len] = l_src[len];
	else
		ft_memcpy(l_dst, l_src, len);
	return (dst);
}
