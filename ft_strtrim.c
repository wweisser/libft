/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:55:15 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 17:42:45 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <string.h>

// compares the caracter with set
static int	compset(char s1, const char *set)
{
	unsigned int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i1;
	unsigned int	i2;
	char			*pointer;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i1 = 0;
	i2 = ft_strlen(s1);
	while (s1[i1] != '\0' && compset(s1[i1], set) == 1)
			i1++;
	if (i2 != 0)
		while ((i2 - 1) > 0 && compset(s1[i2 - 1], set) == 1)
				i2--;
	if (i1 >= i2)
	{
		i1 = 0;
		i2 = 0;
	}
	pointer = (char *)ft_calloc((i2 - i1 + 1), sizeof(char));
	if (pointer == NULL)
		return (pointer);
	i1 = ft_strlcpy(pointer, s1 + i1, (i2 - i1 + 1));
	return (pointer);
}

// int	main(void)
// {
// 	char	test1[] = "          ";
// 	char	*testpointer;
// 	testpointer = ft_strtrim(test1, " ");
// 	printf("compset; %d\n", compset(test1[0], "tel"));
// 	printf("%s \n", testpointer);
// 	return (0);
// }
