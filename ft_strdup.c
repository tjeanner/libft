/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:40:58 by tjeanner          #+#    #+#             */
/*   Updated: 2018/06/12 14:01:25 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*new;

	i = ft_strlen(s1);
	if (!(new = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_strcpy(new, s1);
	return (new);
}
