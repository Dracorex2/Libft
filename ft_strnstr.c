/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:46:29 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/06 11:02:53 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	size;

	i = -1;
	size = ft_strlen(little);
	if (little[0] == 0)
		return (&big[0]);
	while (big[++i])
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(&big[i], &little[0], size) == 0)
				return (&big[i]);
		}
	}
	return (0);
}
