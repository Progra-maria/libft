/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:24:37 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/15 12:49:55 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*function tests for an ASCII character, which is any character 
between 0 and 127 inclusive*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
