/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:54:51 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/14 15:58:12 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	clean(char **field, int numbstr)
{
	while (numbstr-- >= 0)
		free (field[numbstr]);
	free (field);
}

static int	nxtl(char const *s, int i, char c)
{
	int	lenstr;

	lenstr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			lenstr++;
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			return (lenstr++);
		i++;
	}
	return (0);
}

static char	**numbstr(char **field, char const *s, char c)
{
	int		i[2];

	i[0] = 0;
	i[1] = 0;
	while (s[i[0]] != '\0')
	{
		if (s[i[0]] != c && (s[i[0] + 1] == c || s[i[0] + 1] == '\0'))
			i[1]++;
		i[0]++;
	}
	field = (char **)malloc(sizeof(char *) * (i[1] + 1));
	if (field == NULL)
	{
		free (field);
		return (field);
	}
	while (i[1] >= 0)
	{
		field[i[1]] = 0;
		i[1]--;
	}
	return (field);
}

char	**ft_split(char const *s, char c)
{
	char	**field;
	int		i[2];
	int		deflt;

	field = NULL;
	if (s != NULL)
		field = numbstr(field, s, c);
	i[0] = 0;
	i[1] = 0;
	while (field != NULL && s[i[0]] != '\0')
	{
		if (s[i[0]] != c)
		{
			field[i[1]] = (char *)malloc(sizeof(char) * nxtl(s, i[0], c) + 1);
			if (field[i[1]] != NULL)
				deflt = ft_strlcpy(field[i[1]], s + i[0], nxtl(s, i[0], c) + 1);
			else
				clean (field, i[1]);
			i[0] = i[0] + nxtl(s, i[0], c);
			i[1]++;
		}
		else
		i[0]++;
	}
	return (field);
}

// #include <stdio.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char **t;
// 	t = ft_split("  tt  tttt", ' ');
// /*	printf("%d\n", nextdel("222   ", 0, ' '));*/
// 	printf("str 1: %s\nstr 2: %s \n ", t[0], t[2]);
// }
