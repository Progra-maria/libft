/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:54:30 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/14 17:23:58 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	my_string[50] = "El Perro de san Roque no tiene rabo";
	char 	my_string2[60] = "Tengo 42 MANZANAS en 1 cesta\nsi quieres una te la REGALO";
	char	my_string3[10] = "";
	int 	i = 0;
	
	printf("ft_strlen: ");
	printf("%lu ", ft_strlen(my_string));
	printf("%lu", ft_strlen(my_string2));
	printf("%lu\n", ft_strlen(my_string3));
	printf("strlen: ");
	printf("%lu ", strlen(my_string));
	printf("%lu", strlen(my_string2));
	printf("%lu\n", strlen(my_string3));
	printf("string\tft_isalpha\tisalpha\n");
	
	while(my_string2[i])
	{
		printf("%c\t",my_string2[i]);
		printf("%d\t\t ", ft_isalpha(my_string2[i]));
		printf("%d \n", isalpha(my_string2[i]));
		i++;
	}

	i = 0;
	while(my_string3[i])
	{
		printf("%c\t",my_string3[i]);
		printf("%d\t\t ", ft_isalpha(my_string3[i]));
		printf("%d \n", isalpha(my_string3[i]));
		i++;
	}

	i=0;
	while
	{
		printf("%c\t",my_string3[i]);
		printf("%d\t\t ", ft_isdigit(my_string3[i]));
		printf("%d \n", isdigit(my_string3[i]));
		
	}
	return (0);		
}
