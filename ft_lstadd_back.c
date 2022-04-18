/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:17:59 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/12 11:05:35 by wweisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	**temp;

	temp = NULL;
	if (new == NULL)
		return ;
	if (lst == NULL)
		*lst = new;
	else
	{
		temp = lst;
		while (*temp)
			temp = &(*temp)->next;
	}
	new->next = *temp;
	*temp = new;
}
