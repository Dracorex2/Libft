/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:39:02 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/04 16:59:21 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (src < dest)
	{
		while (n--)
			s[n] = d[n];
	}
	else
	{
		while (n--)
		{
			s[i] = d[i];
			i++;
		}
	}
	return (dest);
}
