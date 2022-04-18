/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 09:21:59 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/11 18:29:15 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	char	c;

	sign = 1;
	if (n < 0)
	{
		sign = (-1);
		write(fd, "-", 1);
	}
	if (((n / 10) * sign) == 0)
	{
		c = ((n % 10) * sign) + 48;
		write(fd, &c, 1);
		return ;
	}
	else
	{
		ft_putnbr_fd(((n / 10) * sign), fd);
		c = ((n % 10) * sign) + 48;
		write(fd, &c, 1);
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648 , 1);
// 	return (0);
// }
