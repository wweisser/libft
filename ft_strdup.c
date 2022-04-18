/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:45:59 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 17:11:34 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*pointer;

	i = 0;
	pointer = NULL;
	pointer = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (pointer == NULL)
		return (pointer);
	while (1)
	{
		pointer[i] = s1[i];
		if (s1[i] == '\0')
			break ;
		i++;
	}
	return (pointer);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     const char *s1 = "lorem ipsum dolor sit amet";
//     char *s2;
// 	s2 = ft_strdup(s1);
// 	printf("string 1 %s\n", s1);
// 	printf("string 2 %s\n", s2);
// 	free(s2);
// }
