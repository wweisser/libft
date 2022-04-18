/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:21:54 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 11:10:49 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (n == 0)
		return (lensrc);
	while (src[i] != '\0' && i < (n - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main( void )
// {
//     char buffer[15];
// 	int ret;
//     printf( "%s\n", buffer );
// 	ret = ft_strlcpy( buffer, "abcdefg", 10 );
//     printf( "newstr %s newlen %d\n", buffer, ret );
// 	ret = ft_strlcpy( buffer, "1234567",  6 );
//     printf( "newstr %s newlen %d\n", buffer, ret );
// 	ret = ft_strlcpy( buffer, "abcdefg",  3 );
//     printf( "newstr %s newlen %d\n", buffer, ret );
// 	ret = ft_strlcpy( buffer, "*******",  0 );
//     printf( "newstr %s newlen %d\n", buffer, ret );
//     return EXIT_SUCCESS;
// }
