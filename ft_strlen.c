/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 08:45:08 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/20 16:16:47 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*this function function calculates the length of a given string*/
unsigned long int	ft_strlen(const char *str)
{
	unsigned long int	i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}
