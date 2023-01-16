/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:39:46 by maricarr          #+#    #+#             */
/*   Updated: 2023/01/16 21:55:55 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/**
 * Counts the number of elements in a linked list
 * 
 * @param lst The address of a pointer to the first link of a list.
 * 
 * @return The number of elements in the list.
 */
int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 1;
	if (lst)
	{
		while (lst->next != 0)
		{
			lst = lst->next;
			i++;
		}
		return (i);
	}
	return (0);
}
