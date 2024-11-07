/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:57:06 by lucmansa          #+#    #+#             */
/*   Updated: 2024/11/07 12:41:16 by lucmansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *str, char charset)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] == charset)
			i++;
		if (!str[i])
			return (word);
		word++;
		while (str[i] != charset && str[i] != 0)
			i++;
	}
	return (word);
}

static char	*ft_strdp(const char *src, char charset)
{
	int		len;
	char	*res;
	int		i;

	len = 0;
	while (src[len] && src[len] != charset)
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = -1;
	while (src[++i] != '\0' && src[i] != charset)
		res[i] = src[i];
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		len;
	int		j;

	len = (count(s, c));
	tab = malloc((len + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	j = 0;
	i = 0;
	while (i < len)
	{
		while (s[j] == c)
			j++;
		tab[i] = ft_strdp(&s[j], c);
		while (s[j]!= c && s[j] != 0)
			j++;
		while (s[j] == c)
			j++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
