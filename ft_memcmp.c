/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:30:50 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/05 17:07:04 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*shr1;
	unsigned char		*shr2;

	i = 0;
	shr1 = (unsigned char *)s1;
	shr2 = (unsigned char *)s2;
	while (shr1[i] == shr2[i] && i < n - 1)
		i++;
	if (i == n)
		return (0);
	return (shr1[i] - shr2[i]);
} 
