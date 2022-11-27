/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:28:40 by maricarr          #+#    #+#             */
/*   Updated: 2022/11/27 14:12:44 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <string.h>
#include "libft.h"

/*This function allocs a memory space, set all bytes to zero and returns a 
 * pointer to the memory allocated*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, size * count);
	return (ptr);
}
