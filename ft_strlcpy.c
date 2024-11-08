/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:55:10 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/05 11:43:11 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	if (size)
	{
		while ((src[++i] != 0) && (i < size - 1))
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
