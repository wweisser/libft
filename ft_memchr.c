/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendelin <wendelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:18:23 by wweisser          #+#    #+#             */
/*   Updated: 2022/08/03 17:39:27 by wendelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *buf, int ch, unsigned int n)
{
	unsigned int	i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)buf + i;
	while (i < n)
	{
		if (c[i] == (unsigned char)ch)
			return (buf + i);
		i++;
	}
	c = 0;
	return (0);
}
