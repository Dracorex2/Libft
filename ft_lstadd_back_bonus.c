/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:29:15 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/07 19:07:07 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*res;

	if (!(*lst))
	{
		(*lst) = new;
		return ;
	}
	res = (*lst);
	while (res-> next != NULL)
		res = res-> next;
	res->next = new;
}
