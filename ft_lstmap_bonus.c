/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:08:49 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/07 19:10:23 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*start;
	t_list	*new;

	if (!lst)
		return (NULL);
	res = ft_lstnew((*f)(lst->content));
	start = res;
	lst = lst->next;
	while (lst != NULL)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (start);
}
