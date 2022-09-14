/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:59:29 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/13 14:05:47 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function tests a character returning 1 if it´s a digit (from 0 to 9 inc.)
 * and returning 0 if its any other char*/
int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (1);

	return (0);
}
