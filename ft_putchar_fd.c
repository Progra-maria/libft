/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:39:05 by maricarr          #+#    #+#             */
/*   Updated: 2022/10/11 12:41:11 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*This function writes the char c in the file named in the file descriptor*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
