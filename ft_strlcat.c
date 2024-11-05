/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:49:00 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/05 12:10:54 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int				s;
	unsigned int	i;

	i = 0;
	s = ft_strlen(dst);
	while (i < size - s)
	{
		dst[s + i] = src[i];
		i++;
	}
	return (ft_strlen(dst) + ft_strlen(src));
}
