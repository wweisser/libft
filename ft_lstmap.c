/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wweisser <wweisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:11:33 by wweisser          #+#    #+#             */
/*   Updated: 2022/04/11 12:50:06 by wweisser         ###   ########.fr       */
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
	t_list	*last;
	t_list	*node;

	newlsthead = NULL;
	last = newlsthead;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
			clearlst(newlsthead, del);
		else
		{
			if (newlsthead == NULL)
			{
				newlsthead = node;
				last = newlsthead;
			}
			else
				ft_lstadd_back(&newlsthead, node);
		}
		lst = lst->next;
	}
	return (newlsthead);
}
