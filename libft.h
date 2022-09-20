/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:23:23 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/20 16:46:00 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*this header file contains the functions of the libft library*/

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int					ft_isalpha(int c);
int					ft_isdigit(int c);
unsigned long int	ft_strlen(const char *str);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
void				*ft_memchr(const void *s, int c, size_t n);

#endif
