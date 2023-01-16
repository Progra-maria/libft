/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:34:17 by maricarr          #+#    #+#             */
/*   Updated: 2023/01/16 21:56:29 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Iterate through the list, deleting each node's content and freeing the node itself
 * 
 * @param lst a pointer to the first element of a linked list
 * @param del a pointer to a function that takes a single void pointer argument and returns nothing.
 * 
 * @return A pointer to the first element of the list.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nextnode;
	t_list	*lstcopy;

	lstcopy = *lst;
	if (!lstcopy || !del)
		return ;
	while (lstcopy)
	{
		nextnode = lstcopy->next;
		del(lstcopy->content);
		free(lstcopy);
		lstcopy = nextnode;
	}
	*lst = NULL;
}
