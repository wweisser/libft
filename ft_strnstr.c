/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:23:54 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 11:29:02 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locates a substring in haystack, searches not more than len characters,
//returns a pointer to the common string
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dif;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] != '\0' && needle[j] != '\0' && (i + j) < len)
		{
			dif = 0;
			dif = (haystack[i + j] - needle[j]);
			if (dif != 0)
				break ;
			j++;
		}
		if (dif == 0 && needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main( void )
// {
// 	printf( "%s\n", ft_strnstr(NULL, "", 0));
// 	return EXIT_SUCCESS;
// }
