/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:34:21 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/06 18:25:30 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_itoa2(char *res, size_t i, int n)
{
	res[i] = 0;
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n)
	{
		res[--i] = (n % 10) + 48;
		n /= 10;
	}
}

char *ft_itoa(int n)
{
	char	*res;
	size_t	i;
	int	nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	nb = n;
	i = 0;
	if (nb <= 0)
		i++;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	res = malloc(sizeof(char) * i + 1);
	if (!res)
		return (NULL);
	ft_itoa2(res, i, n);
	return (res);
}
