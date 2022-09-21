/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:37:39 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/21 18:05:24 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	else
	{
		while (*haystack && (ft_strlen(needle) <= len--))
		{
			if (!ft_strncmp((char *)haystack, (char *)needle, ft_strlen(needle)))
				return ((char *)haystack);
			haystack++;
		}
		return (NULL);
	}
}
