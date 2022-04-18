/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:13:21 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/14 14:40:13 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	detlen(int n)
{
	int		j;

	j = 1;
	if (n < 0)
		j++;
	while (1)
	{
		n = n / 10;
		j++;
		if (n == 0)
			break ;
	}
	return (j);
}

static char	*detsize(int n)
{
	int		j;
	char	*pointer;

	j = 0;
	j = detlen(n);
	pointer = NULL;
	pointer = (char *)malloc((j) * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	j--;
	while (j >= 0)
	{
		pointer[j] = '#';
		j--;
	}
	return (pointer);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*pointer;

	i = detlen(n) - 1;
	j = n;
	pointer = detsize(n);
	if (pointer == NULL)
		return (NULL);
	pointer[i] = '\0';
	i--;
	while (i >= 0)
	{
		if (n < 0)
			pointer[i] = ((n % 10) * (-1)) + 48;
		else if (n > 0)
			pointer[i] = (n % 10) + 48;
		else
			pointer[i] = '0';
		n = n / 10;
		i--;
	}
	if (j < 0)
		pointer[0] = '-';
	return (pointer);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft_itoa result = %s\n", ft_itoa(2147483647));
// 	return (0);
// }
