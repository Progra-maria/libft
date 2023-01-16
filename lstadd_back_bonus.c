/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:27:54 by maricarr          #+#    #+#             */
/*   Updated: 2023/01/16 21:54:41 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * Add a new element to the end of a list
 * 
 * @param lst A pointer to the first link of a list.
 * @param new the new element to add to the list
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t_last;

	t_last = ft_lstlast(*lst);
	if (t_last)
	t_last->next = new;
	else
	*lst = new;
}
