/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:38:21 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/16 21:27:03 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	*ft_memset(void *b, int c, size_t len)
{	
	int i;

	i = 0;
	char *str = b;
	while (len--)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (b);
}	
