/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:01:58 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/07 14:37:22 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*shr;

	i = 0;
	shr = (unsigned char *)s;
	while (i < n)
	{
		if (shr[i] == (unsigned char)c)
			return (&shr[i]);
		i++;
	}
	return (NULL);
}
