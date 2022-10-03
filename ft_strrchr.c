/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricarr <maricarr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:29:04 by maricarr          #+#    #+#             */
/*   Updated: 2022/09/28 11:10:31 by maricarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{	
	int i;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	while (--i >= 0)
	{
		if(s[i] == (unsigned char)c)
			return ((char *)s + i);
	}
	return (0);	
}

// int	main(void)
// {	
// 	const char *str1 ="Lorem ipsum";
// 	printf("%s\n", strrchr(str1, '\0'));
// 	printf("%s\n", ft_strrchr(str1, '\0'));
// 	printf("%s\n", ft_strrchr(str1 + 3, 123456789));
// 	printf("%s\n", strrchr(str1 + 3, 123456789));

// 	return (0);
// }

