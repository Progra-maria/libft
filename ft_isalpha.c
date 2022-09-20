/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:23:44 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/20 12:09:30 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function returns 1 if the char passed as param is an alphabetic character
 and returns 0 if the char is not alphabetic*/
int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
