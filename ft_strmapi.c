/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:51:25 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/07 12:38:34 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (0);
	i = -1;
	while (s[++i])
		res[i] = f(i, s[i]);
	res[i] = 0;
	return (res);
}
