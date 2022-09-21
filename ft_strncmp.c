/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:47:52 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/21 20:20:17 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (--n  && ((char)s1[i] &&  (char)s2[i]) && s1[i] == s2[i])
	{
		i++;	
	}
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
