/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:39:05 by wweisser          #+#    #+#             */
/*   Updated: 2022/03/28 11:00:40 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int	c;

// 	c = 64;
// 	printf("tolower(c) => %c \n" ,ft_tolower(c));
// 	return (0);
// }
