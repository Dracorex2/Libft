/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:46:29 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/06 10:59:34 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (!little)
		return((char *)big);
	if (ft_strlen(little) < len)
		return (NULL);
	i = 0;
	j = 0;
	while (big[i] != little[j] && big[i] != 0)
		i++;
	if (big[i] == 0)
		return (NULL);
	while (big[i] == little[j])
	{
		i++;
		j++;
	}
	if (little[j] == 0)
		return ((char *)&big[i - j]);
	else
		return (NULL);
}
