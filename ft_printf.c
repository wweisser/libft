/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:15:36 by wweisser          #+#    #+#             */
/*   Updated: 2022/08/03 15:02:29 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

// Return a number n int their hexadecimal repraesentation.
// Style detremins if with upper or lower letters.
char	hextable(long n, int style)
{
	int		i;
	char	hextable[17];

	i = -1;
	while (i++ < 16)
	{
		if (i <= 9)
			hextable[i] = i + 48;
		else if (i > 9 && style == 0)
			hextable[i] = i + 87;
		else if (i > 9 && style == 1)
			hextable[i] = i + 55;
	}
	hextable[16] = '\0';
	return (hextable[n]);
}

// Dissasmbles a number into parts of 16 and transforms them
// into Hexadecimal representation. Also writes it to output.
// Returns number of printed chars
int	print_hex10lc(unsigned long hex10lc, int style)
{
	char	c;
	int		i;

	i = 0;
	if (hex10lc < 0)
	{
		i = print_hex10lc((unsigned int )hex10lc, style);
		return (i);
	}
	if ((hex10lc / 16) == 0)
	{
		c = hextable(hex10lc % 16, style);
		write (1, &c, 1);
		return (1);
	}
	i = 1 + print_hex10lc (hex10lc / 16, style);
	c = hextable(hex10lc % 16, style);
	write (1, &c, 1);
	return (i);
}

//Prints a pointer in hexadecimal represenation
int	print_vpoint(void *pointer)
{
	long	c;
	int		i;

	i = 2;
	c = (long)pointer;
	write (1, "0x", 2);
	i += print_hex10lc(c, 0);
	return (i);
}

// Selects a outputoption depending on the flag
int	selct(va_list ap, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = print_char((char )va_arg(ap, int));
	if (c == 's')
		i = print_str(va_arg(ap, char *));
	if (c == 'p')
		i = print_vpoint(va_arg(ap, void *));
	if (c == 'd')
		i = print_b10numb(va_arg(ap, int));
	if (c == 'i')
		i = print_b10int(va_arg(ap, int));
	if (c == 'u')
		i = print_usb10numb(va_arg(ap, unsigned int));
	if (c == 'x')
		i = print_hex10lc(va_arg(ap, unsigned int), 0);
	if (c == 'X')
		i = print_hex10lc(va_arg(ap, unsigned int), 1);
	if (c == '%')
	{
		write (1, "%", 1);
		i++;
	}
	return (i);
}

// Handles the input and the Flags
int	ft_printf(const char *str, ...)
{
	int		i;
	int		nprinted;
	va_list	ap;

	if (str == NULL || str[0] == '\0')
		return (0);
	i = 0;
	nprinted = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			nprinted += selct(ap, str[i]);
		}
		else
		{
			write (1, &str[i], 1);
			nprinted++;
		}
		i++;
	}
	va_end (ap);
	return (nprinted);
}
