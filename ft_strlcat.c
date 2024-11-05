/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:49:00 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/05 13:37:17 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	i = -1;
	s = ft_strlen(dst);
	while (src[++i] != 0 && (s + i) + 1 < size)
		dst[s + i] = src[i];
	dst[s + i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
