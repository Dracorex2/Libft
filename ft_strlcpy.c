/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:55:10 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/04 15:51:41 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	count;

	i = -1;
	while ((src[++i] != 0) && (size - 1 != 0))
	{
		dst[i] = src[i];
		size--;
		count++;
	}
	dst[i] = 0;
	return (count);
}
