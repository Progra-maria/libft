/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:37:39 by maricarr          #+#    #+#             */
/*   Updated: 2022/10/11 14:35:48 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*This function locates the first occurrence of string needle in the string 
 * haystack (both NULL-terminated), where not more than len characters are 
 * searched.  Characters that appear after a `\0' character are not searched.
 * If needle is an empty string, haystack is returned; if needle occurs nowhere
 * in haystack, NULL is returned; otherwise a pointer to the first character 
 * of the first occurrence of needle is returned.*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	else
	{
		while (*haystack && (ft_strlen(needle) <= len--))
		{
			if (!ft_strncmp((char *)haystack, (char *)needle, \
			ft_strlen(needle)))
				return ((char *)haystack);
			haystack++;
		}
		return (NULL);
	}
}
