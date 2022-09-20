/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:28:27 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/20 12:41:56 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*function writes n zeroed bytes to the string s.  If n is zero, does nothing*/
void	*ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	str = s;
	len = n;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
	s = str;
	return (str);
}
