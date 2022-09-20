/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:38:21 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/20 12:21:48 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
