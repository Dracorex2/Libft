/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:20:17 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/06 12:31:44 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*i;

	i = malloc(nmemb * size);
	if (!i)
		return (NULL);
	ft_bzero(i, nmemb * size);
	return (i);
}
