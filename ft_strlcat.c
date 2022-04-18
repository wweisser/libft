/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:59:13 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 11:08:17 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (n <= lendst)
		return (n + lensrc);
	while (src[i] != '\0' && i < (n - lendst - 1))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}

// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>
// int main( void )
// {
// 	int n = 6;
// 	int ret1 = 0;
// 	int ret2 = 0;
// 	char dst1[15] = "a";
// 	char dst2[15] = "a";
// 	dst1[10] = 'a';
// 	dst2[10] = 'a';
// 	ret1 = ft_strlcat(dst1, "lorem ipsum dolor sit amet", n);
// 	ret2 = strlcat(dst2, "lorem ipsum dolor sit amet", n);
// 	write(1, dst1, 15);
// 	write(1, "\n", 1);
// 	write(1, dst2, 15);
// 	write(1, "\n", 1);
//     return EXIT_SUCCESS;
// }
