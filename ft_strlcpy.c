/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:12:08 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/16 23:15:35 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*this function copy strings wit the same input parameters and 
 * ouput the source string size and 
 * warranties a NULL destination in destination string if there is room. 
 * Room for NULL shouls be included in dstsize: 
 * ft_strlcpy copies up to dstsize-1, NULL terminating if dstsize is not 0*/ 
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i  = 0;;

	if (dstsize > 0)
	{
		while (--dstsize && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
			i++;
		return (i);
}
