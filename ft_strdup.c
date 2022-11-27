/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:35:31 by maricarr          #+#    #+#             */
/*   Updated: 2022/10/11 12:53:28 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*This function allocates memory and copies a new string equal to s1 and
 * terminates the new string with NULL*/
char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	while (*s1)
		ptr[i++] = *s1++;
	ptr[i] = '\0';
	return (ptr);
}
