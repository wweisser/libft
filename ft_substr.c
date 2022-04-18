/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:19:26 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 17:13:57 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locates substring of length len at point start, copys it returns it.
char	*ft_substr(char const *s, size_t start, size_t len)
{
	unsigned int	i;
	unsigned int	slen;
	char			*pointer;

	i = 0;
	pointer = NULL;
	if (s == NULL)
		return (pointer);
	slen = (unsigned int )ft_strlen(s);
	if (slen > len)
		pointer = (char *)ft_calloc(len + 1, sizeof(char));
	else
		pointer = (char *)ft_calloc(slen + 1, sizeof(char));
	if (pointer == NULL)
		return (NULL);
	if (slen != 0 && slen > start)
		slen = ft_strlcpy(pointer, s + start, len + 1);
	else
		pointer[0] = '\0';
	return (pointer);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[100]= "123456789";
// 	char	*subst;

// 	subst = ft_substr("tripouille", 1, 2);
// 	printf("%s \n", subst);
// }
