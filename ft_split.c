/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendelin <wendelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:54:51 by wweisser          #+#    #+#             */
/*   Updated: 2022/08/03 17:36:49 by wendelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static void	asgnstr(char ***field_return, int i[3])
{
	char	**field;

	field = *field_return;
	field[i[1]] = NULL;
	field[i[1]] = (char *)malloc(sizeof(char) * (i[2] + 1));
	if (field[i[1]] == NULL)
	{
		while (i[1] >= 0)
		{
			free (field[i[1]]);
			i[1]--;
		}
		free (field);
		*field_return = NULL;
	}
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
		return (NULL);
	}
	while (i[1] >= 0)
	{
		field[i[1]] = NULL;
		i[1]--;
	}
	return (field);
}

char	**ft_split(char const *s, char c)
{
	char	**field;
	int		i[3];

	field = NULL;
	if (s != NULL)
		field = numbstr(field, s, c);
	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	while (field != NULL && s[i[0]] != '\0')
	{
		if (s[i[0]] != c)
			i[2]++;
		if (s[i[0]] != c && (s[i[0] + 1] == c || s[i[0] + 1] == '\0'))
		{
			asgnstr(&field, i);
			i[1]++;
			i[2] = 0;
		}
		i[0]++;
	}
	return (field);
}
