/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:39:04 by maricarr          #+#    #+#             */
/*   Updated: 2023/01/16 21:56:01 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Create a new node and return it
 * 
 * @param content the content of the new node
 * 
 * @return A pointer to a new node.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (0);
	newnode->content = content;
	newnode->next = 0;
	return (newnode);
}
