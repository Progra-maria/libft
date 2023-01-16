/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:36:42 by maricarr          #+#    #+#             */
/*   Updated: 2023/01/16 21:55:59 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * It takes a list, applies a function to each element of the list, and returns a new list with the
 * results of the function
 * 
 * @param lst The list to iterate over.
 * @param f a function that takes a void pointer and returns a void pointer
 * @param del a function that takes a pointer to a single element of the list and frees the memory of
 * that element.
 * 
 * @return A pointer to the first element of the new list.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newelement;

	newlist = NULL;
	if (!f || !del)
		return (NULL);
	while (lst != NULL)
	{
		newelement = ft_lstnew((*f)(lst->content));
		if (!newelement)
		{
			if (newelement != NULL)
				ft_lstclear(&newlist, (*del));
			return (NULL);
		}
		ft_lstadd_back(&newlist, newelement);
		lst = lst->next;
	}
	return (newlist);
}
