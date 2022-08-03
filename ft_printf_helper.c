/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendelin <wendelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:53:27 by wweisser          #+#    #+#             */
/*   Updated: 2022/08/03 17:24:54 by wendelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_char(char c)
{
	write (1, &c, 1);
	return (1);
}

int	print_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		i = 6;
	}
	else
	{
		while (str[i] != '\0')
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	return (i);
}

// Prints a long, returns number of printed chars
int	print_b10numb(long b10numb)
{
	int	i;

	i = 1;
	if (b10numb < 0)
		i++;
	ft_putnbr_fd(b10numb, 1);
	while ((b10numb / 10) != 0)
	{
		b10numb = b10numb / 10;
		i++;
	}
	return (i);
}

// Prints an integer prints a long,
// returns number of printed chars
int	print_b10int(int b10int)
{
	int	i;

	i = 1;
	if (b10int < 0)
		i++;
	ft_putnbr_fd(b10int, 1);
	while ((b10int / 10) != 0)
	{
		b10int = b10int / 10;
		i++;
	}
	return (i);
}

// Prints an unsigned long
// returns number of printed chars
int	print_usb10numb(unsigned long usb10numb)
{
	int	i;

	i = 1;
	ft_putnbr_fd(usb10numb, 1);
	while ((usb10numb / 10) != 0)
	{
		usb10numb = usb10numb / 10;
		i++;
	}
	return (i);
}
