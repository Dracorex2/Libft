/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:49:31 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/06 14:22:08 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	ft_memcpy(res, &s[start], len);
	res[len] = 0;
	return (res);
}
