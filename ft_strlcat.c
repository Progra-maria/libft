/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:48:11 by maricarr          #+#    #+#             */
/*   Updated: 2022/10/11 18:28:21 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

/*This function copy and concatenate strings. take the full size of the 
 * destination buffer and guarantee NUL-termination if there is room.
 * appends string src to the end of dst.  It will append at most 
 * dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, 
 * unless dstsize is 0 or the original dst string was longer than dstsize*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	offset;
	size_t	s_len;
	size_t	d_len;

	offset = ft_strlen(dst);
	s_len = ft_strlen((char *) src);
	d_len = ft_strlen(dst);
	if (dstsize > 0)
	{
		while (*src && (offset < dstsize - 1))
		{
			*(dst + offset) = *src;
			offset++;
			src++;
		}
		*(dst + offset) = '\0';
	}
	if (d_len >= dstsize)
		d_len = dstsize;
	return (s_len + d_len);
}
