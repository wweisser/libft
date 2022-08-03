/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wendelin <wendelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:11:33 by wweisser          #+#    #+#             */
/*   Updated: 2022/08/03 17:20:50 by wendelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clearlst(t_list *newlst, void (*del)(void *))
{
	t_list	*temp;

	temp = NULL;
	temp = newlst;
	while (temp != NULL)
	{
		temp = temp->next;
		del(newlst->content);
		free(newlst);
		newlst = temp;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlsthead;
	t_list	*node;

	newlsthead = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
			clearlst(newlsthead, del);
		else
		{
			if (newlsthead == NULL)
				newlsthead = node;
			else
				ft_lstadd_back(&newlsthead, node);
		}
		lst = lst->next;
	}
	return (newlsthead);
}
