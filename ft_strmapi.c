/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:22:29 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 18:47:02 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*pointer;
	int		i;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	pointer = 0;
	pointer = (char *)malloc((i + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	pointer[i] = '\0';
	i = 0;
	while (s[i] != '\0')
	{
		pointer[i] = f(i, s[i]);
		i++;
	}
	return (pointer);
}

// int	main(void)
// {
// 	return (0);
// }
