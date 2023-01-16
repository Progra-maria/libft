/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:31:12 by maricarr          #+#    #+#             */
/*   Updated: 2023/01/16 21:56:12 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/**
 * Adds a new element to the beginning of a linked list.
 * 
 * @param head a pointer to the first element of a linked list
 * @param new the new element to add to the list
 */
void	ft_lstadd_front(t_list **head, t_list *new)
{
	new->next = *head;
	*head = new;
}
