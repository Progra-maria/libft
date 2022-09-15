/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:38:21 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/15 16:21:16 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	char *str = b;
	int max;
	
	i = 0;
	max = len;
	while (i <= max)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
