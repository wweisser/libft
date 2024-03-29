/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendelin <wendelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:55:44 by wweisser          #+#    #+#             */
/*   Updated: 2022/08/03 17:13:42 by wendelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*pointer;

	i = 0;
	pointer = NULL;
	pointer = malloc(count * size);
	if (pointer == NULL)
		return (NULL);
	while (i < (count * size))
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}

// #include <stdio.h>
// #include <unistd.h>

// int		main(void)
// {
// 	char	*str;
// 	str = (char *)ft_calloc(30, 1);
// 	if (!str)
// 		write(1, "NULL", 4);
// 	else
// 		write(1, "0000000000000000", 30);

// 	return (0);
// }
