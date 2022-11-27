/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:24:43 by maricarr          #+#    #+#             */
/*   Updated: 2022/11/27 14:18:25 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks if the given character c is an printable cahracter*/
int	ft_isprint(int c)
{
	return (c >= 040 && c <= 0176);
}
