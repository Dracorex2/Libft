/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:39:02 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/05 14:10:33 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;

	if (n != 0 && src == 0 && dest == 0)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	i = -1;
	if (src >= dest)
	{
		while (++i < n)
			d[i] = s[i];
	}
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}
