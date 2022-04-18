/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:49:58 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/02 12:51:12 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//writes len bytes of value c (converted to an unsigned char) to the string b
void	*ft_memset(void *buf, int replace, unsigned int n)
{
	unsigned int	i;
	unsigned char	*c;

	i = 0;
	c = (unsigned char *)buf;
	while (i < n)
	{
		c[i] = (unsigned char)replace;
		i++;
	}
	return (buf);
}
