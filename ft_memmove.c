/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:01:47 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/26 19:42:32 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/*This function copies len bytes from string src to string dst.The two strings 
 * may overlap; the copy is always done in a non-destructive manner.*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	/*crear variables auxiliares (punteros) para no sobreescribir las originales; 
	son unsigned char para que comprae exactamente los 8 bits tal cual 
	están en la memoria y los convierta en char */
	const unsigned char	*l_src;
	unsigned char		*l_dst;
	/*asignar los punetros creados para que apunten a las zonas de memoria que nos 
	dan en los parámetros*/
	l_src = src;
	l_dst = dst;
	/*comparar el tamaño de las zonas de memoria dadas en los parámetros para ver 
	si en dst cabe src*/
	if (l_src < l_dst)
		while (len--)/* esta experión le va restando a len cada vez que iteramos 
		con el while*/
			l_dst[len] = l_src[len]; /*vamos copiando cada byte de src en len*/
	else /*si dst es menor que src, le hacemos un memcpy*/
		ft_memcpy(l_dst, l_src, len);
	return (dst); /*retornamos dst*/
}
