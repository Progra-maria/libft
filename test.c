/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:54:30 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/16 23:19:33 by maricarr         ###   ########.fr       */
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
	char	my_string4[40] = "Esto es un string de prueba";
	char	my_string5[40] = "Esto es un string de prueba";
	char	my_string8[30];
	char	my_string9[30];
	char	my_string6[40] = "Hola qué tal";
	char	my_string7[40] = "Hola qué tal";
	int		test_char;
	int 	i = 0;
	char	dest[] = "123456789012345678901234567890";
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
	printf("string\tft_isdigit\tisdigit\n");
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
	printf("string\tft_isalnum\tisalnum\n");
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
	printf("char value\tft_isascii\tisascii\n");
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
	printf("char value\tft_isprint\tisprint\n");
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
	printf("ft_strlen vs strlen\n");
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
	printf("ft_memset vs memset\n");
	printf("#######################################\n");
	
	test_char = 'A';
	ln = ft_strlen(dest);
	printf("ft_memset:\n");
	printf("%s\n", ft_memset(dest, test_char, 31));
	printf("memset:\n");
	printf("%s\n", memset(dest, test_char, 31));

/*###############################################################################*/
/*bzero test*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("ft_bzero vs bzero\n");
	printf("#######################################\n");
	ln = 20;
	printf("ft_bzero:\n");
	printf("%s\n", ft_bzero(dest, ln ));
	printf("%lu\n", strlen(dest));
	printf("bzero:\n");
	printf("%s\n", bzero(dest, ln));
	printf("%lu\n", strlen(dest));

/*###############################################################################*/
/*memcpy test*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("ft_memcpy vs memcpy\n");
	printf("#######################################\n");
	ln = 3;
	printf("ft_memcpy:\n");
	printf("string de origen: %s\n",my_string4); 
	printf("string de destino - antes de ft_memcpy: %s\n", my_string6);
	ft_memcpy(my_string6, my_string4, ln);
	printf("string de destino - después de ft_memcpy: %s\n", my_string6);
	printf("memcpy:\n");
	printf("string de destino - antes de memcpy: %s\n", my_string7);
	memcpy(my_string7, my_string4, ln);
	printf("string de destino - después de memcpy: %s\n", my_string7);
/*###############################################################################*/
/*memmove test*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("ft_memmove vs memmove\n");
	printf("#######################################\n");
	ln = 5;
	printf("ft_memmove:\n");
	printf("string de origen: %s\n",my_string4); 
	printf("string de destino - antes de ft_memmove: %s\n", my_string8);
	ft_memmove(my_string6, my_string4, ln);
	printf("string de destino - después de ft_memmove: %s\n", my_string8);
	printf("memmove:\n");
	printf("string de origen: %s\n", my_string5);
	printf("string de destino - antes de memmove: %s\n", my_string7);
	memmove(my_string7, my_string5, ln);
	printf("string de destino - después de memmove: %s\n", my_string7);
/*###############################################################################*/
/*strlcpy test*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("ft_strlcpy vs strlcpy\n");
	printf("#######################################\n");
	ln = 5;
	printf("ft_strlcpy:\n");
	printf("string de origen: %s\n",my_string); 
	printf("string de destino - antes de ft_strlcpy: %s\n", my_string8);
	ft_strlcpy(my_string8, my_string, 20);
	printf("string de destino - después de ft_strlcpy: %s\n", my_string8);
	printf("return de ft_strlcpy: %lu\n", ft_strlcpy(my_string8, my_string,20)); 
	printf("strlcpy:\n");
	printf("string de destino - antes de strlcpy: %s\n", my_string9);
	strlcpy(my_string9, my_string, 20);
	printf("string de destino - después de strlcpy: %s\n", my_string9);
	printf("return de strlcpy: %lu\n", ft_strlcpy(my_string8, my_string,20)); 
/*###############################################################################*/
/********************************END OF TEST************************************\*/
/*###############################################################################*/
	printf("#######################################\n");
	printf("END OF TEST\n");
	printf("#######################################\n");

	return (0);	
}
