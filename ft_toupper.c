/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:54:28 by wweisser          #+#    #+#             */
/*   Updated: 2022/03/28 11:00:34 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int	c;

// 	c = 65;
// 	printf("toupper(c) => %c \n" ,ft_toupper(c));
// 	return (0);
// }
