/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 16:55:26 by tjeanner          #+#    #+#             */
/*   Updated: 2018/06/21 15:07:19 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordspos(char const *s, char c, int n)
{
	int		i;
	char	*tmp;

	if (n < 0)
		return (-1);
	else
	{
		i = 0;
		while (n >= 0)
		{
			tmp = ft_strchr(s + i, c);
			while (*tmp && *tmp == c)
				tmp++;
			n--;
		}
		return ((i = (!*tmp) ? -1 : tmp - s));
	}
}

static int	ft_countwords(char const *s, char c)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		res += (!s[i] && s[i - 1] == c) ? 0 : 1;
	}
	return (res);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		nb;
	char	**tab;

	nb = ft_countwords(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nb + 1))))
		return (NULL);
	tab[nb] = NULL;
	i = 0;
	nb = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!(tab[nb] = (char *)malloc(sizeof(char) * (ft_strchr(s + i, c) - s
							+ i + 1))))
			return (NULL);
		ft_strncpy(tab[nb], s + i, ft_strchr(s + i, c) - s + i);
		tab[nb][ft_strchr(s + i, c) - s + i] = '\0';
		nb++;
		i = ft_wordspos(s, c, nb + 1);
	}
	return (tab);
}
