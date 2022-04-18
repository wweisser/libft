/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:45:56 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/06 17:09:55 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		if (i == 0)
			break ;
		i--;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "1345";
// 	char	*pointer;
// 	pointer = ft_strrchr(str, '\0');
// 	printf("%s\n", pointer);
// }
