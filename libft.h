/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:23:23 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/15 16:27:57 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*this header file contains the function of the libft library*/

#ifndef _LIBFT_H_
#define _LIBFT_H_

int					ft_isalpha(int c);
int					ft_isdigit(int c);
unsigned long int	ft_strlen(char *str);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
void				*ft_memset(void *b, int c, size_t len);
void				bzero(void *s, size_t n);
#endif