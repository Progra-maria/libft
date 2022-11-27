/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:38:21 by maricarr          #+#    #+#             */
/*   Updated: 2022/11/27 14:31:06 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* This function fills a memory area (b) with a given char (c) until len ends */
void	*ft_memset(void *b, int c, size_t len)
{	
	int		i;
	char	*str;

	i = 0;
	str = b;
	while (len--)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (b);
}	
