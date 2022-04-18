/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:24:21 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 17:39:15 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// adds the strings in the assigned memory
static void	*join(char *pointer, char const *s1, char const *s2)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1] != '\0')
	{
		pointer[i1] = s1[i1];
		i1++;
	}
	while (1)
	{
		pointer[i1 + i2] = s2[i2];
		if (s2[i2] == '\0')
			break ;
		i2++;
	}
	return (pointer);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*pointer;

	pointer = NULL;
	if (s1 == NULL || s2 == NULL)
		return (pointer);
	pointer = (char *)ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1),
			sizeof(char));
	if (pointer == NULL)
		return (pointer);
	pointer = join(pointer, s1, s2);
	return (pointer);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test0[]= "lorem ipsum";
// 	char	test1[]= "\0";
// 	char	*subst;
// 	subst = ft_strjoin(test0, test1);
// 	printf("%s \n", subst);
// }
