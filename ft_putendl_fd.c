/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 09:55:37 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 18:45:16 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
		i++;
	write (fd, s, i);
	write (fd, "\n", 1);
}

// int	main(void)
// {
// 	ft_putendl_fd("fffff", 2);
// 	return (0);
// }
