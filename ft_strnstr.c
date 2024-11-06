/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:46:29 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/06 12:24:09 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_mycmp(const char *s1, const char *s2, size_t n, size_t len)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i])
		i++;
	if (i > len)
		return (-1);
	if (i == n)
		return (0);
	return (-1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	size;

	if (!little[0])
		return ((char *)big);
	if (!len)
		return (0);
	i = -1;
	size = ft_strlen(little);
	while (big[++i] && i < len)
	{
		if (big[i] == little[0])
			if (ft_mycmp(little, &big[i], size, len - i) == 0)
				return ((char *)&big[i]);
	}
	return (0);
}
