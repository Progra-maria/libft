/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:27:16 by maricarr          #+#    #+#             */
/*   Updated: 2022/11/25 20:08:05 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*this function takes the int value and converts to absolute number*/
static long int	ft_abs(int a)
{
	long int	num;

	num = a;
	if (num >= 0)
		return (num);
	return (-num);
}

/*This function returns the number of digits of a given int value,
 * sign included*/
static int	ft_ilen(int a)
{
	int	i;

	i = 0;
	if (a == 0)
		return (2);
	if (a < 0)
		i++;
	while (a)
	{
		a = a / 10;
		i++;
	}
	i++;
	return (i);
}

/*This function fills the string s with the digits of n while len is the lenght 
 * of the number*/
char	*ft_fillstr(char *s, long unsigned int n, int len)
{
	s[--len] = '\0';
	len--;
	while (n && len >= 0)
	{
		s[len--] = 48 + (n % 10);
		n = n / 10;
	}
	return (s);
}

/*This function represents in a by-malloc generated string of every
int value*/
char	*ft_itoa(int n)
{
	int					i;
	long unsigned int	absn;
	char				*str;

	if (n < -2147483648 || n > 2147483647)
		return (NULL);
	i = ft_ilen(n);
	absn = ft_abs(n);
	str = (char *)malloc((int)i);
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = ft_fillstr(str, absn, i);
	if (n < 0)
		str[0] = '-';
	return (str);
}
