/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:41:10 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 14:56:16 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*pdest;
	const char		*psrc;

	if (src == 0 && dest == 0 && n != 0)
		return (dest);
	pdest = (char *)dest;
	psrc = (const char *)src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	dst[100];
// 	ft_memcpy(dst, "c", 0);
// 	printf("%c \n", dst[0]);
// }
