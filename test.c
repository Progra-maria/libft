/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:54:30 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/15 16:30:34 by maricarr         ###   ########.fr       */
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
	int		test_char;
	int 	i = 0;
	char	dest[50];
	size_t	ln;

/*###############################################################################*/
	/*ft_is_alpha test*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("string\tft_isalpha\tisalpha\n");
	printf("#######################################\n");
	
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
/*###############################################################################*/
	/*ft_isdigit test */
/*###############################################################################*/
	printf("#######################################\n");
	printf("string\tft_isdigit\tisdigit\n");i=0;
	printf("#######################################\n");

	i = 0;
	while(my_string2[i])
	{
		printf("%c\t",my_string2[i]);
		printf("%d\t\t ", ft_isdigit(my_string2[i]));
		printf("%d \n", isdigit(my_string2[i]));
		i++;
	}
/*###############################################################################*/
/*ft_isalnum test*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("string\tft_isalnum\tisalnum\n");i=0;
	printf("#######################################\n");
	
	i = 0;
	while(my_string2[i])
	{
		printf("%c\t",my_string2[i]);	
		printf("%d\t\t ", ft_isalnum(my_string2[i]));
		printf("%d \n", isalnum(my_string2[i]));
		i++;
	}
/*###############################################################################*/
/*ft_isascii test*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("char value\tft_isascii\tisascii\n");i=0;
	printf("#######################################\n");
	
	test_char = -10;
	while(test_char <= 140)
	{
		printf("%c\t",test_char);	
		printf("%d\t\t ", ft_isascii(test_char));
		printf("%d \n", isascii(test_char));
		test_char = test_char + 10;
	}
/*###############################################################################*/
/*ft_isprint test*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("char value\tft_isprint\tisprint\n");i=0;
	printf("#######################################\n");
	
	test_char = -1;
	while(test_char <= 140)
	{
		printf("%c\t",test_char);	
		printf("%d\t\t ", ft_isprint(test_char));
		printf("%d \n", isprint(test_char));
		test_char++;;
	}
/*###############################################################################*/
	/*strlen test*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("ft_strlen vs strlen\n");i=0;
	printf("#######################################\n");
	
	printf("ft_strlen: ");
	printf("%lu ", ft_strlen(my_string));
	printf("%lu", ft_strlen(my_string2));
	printf("%lu\n", ft_strlen(my_string3));
	printf("strlen: ");
	printf("%lu ", strlen(my_string));
	printf("%lu", strlen(my_string2));
	printf("%lu\n", strlen(my_string3));
/*###############################################################################*/
/*memset test*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("ft_memset vs memset\n");i=0;
	printf("#######################################\n");
	
	test_char = 'A';
	ln = ft_strlen(dest);
	printf("ft_memset:\n");
	printf("%s\n", ft_memset(dest + ln, test_char, 50 - ln));
	printf("memset:\n");
	printf("%s ", memset(dest + ln, test_char, 50 - ln));

/*###############################################################################*/
/*bzero test*/
/*###############################################################################*/
/*	printf("#######################################\n");
	printf("ft_bzero vs bzero\n");i=0;
	printf("#######################################\n");
	
	test_char = 'A';
	ln = ft_strlen(dest);
	printf("ft_bzero:\n");
	printf("%s\n", ft_bzero(dest + ln, test_char, 50 - ln));
	printf("bzero:\n");
	printf("%s ", bzero(dest + ln, test_char, 50 - ln));
*/	
	return (0);		
}
