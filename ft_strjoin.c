/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 16:39:18 by tjeanner          #+#    #+#             */
/*   Updated: 2018/06/21 15:02:12 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		o;
	char	*new;

	i = ft_strlen(s1);
	if (!(new = (char *)malloc(sizeof(char) * (i + ft_strlen(s2) + 1))))
		return (NULL);
	o = 0;
	ft_strcpy(new, s1);
	ft_strcpy(new + i, s2);
	return (new);
}
