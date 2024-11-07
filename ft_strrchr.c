/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:18:06 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/07 12:49:05 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	c %= 256;
	while (s[i] != 0)
		i++;
	while (s[i] != c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return ((char *)&s[i]);
}
