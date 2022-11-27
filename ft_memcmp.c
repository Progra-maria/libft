/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:49:21 by maricarr          #+#    #+#             */
/*   Updated: 2022/11/27 14:20:12 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function compares two memory spaces taken as strings and analyzes them 
 * byte to byte (unsigned char). Returns the first not matching byte 
 * difference (s1 - s2)*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*t_s1;
	const unsigned char	*t_s2;

	i = 0;
	t_s1 = (const unsigned char *)s1;
	t_s2 = (const unsigned char *)s2;
	while (n--)
	{
		if (t_s2[i] != t_s1[i])
			return (t_s1[i] - t_s2[i]);
			i++;
	}
	return (0);
}
