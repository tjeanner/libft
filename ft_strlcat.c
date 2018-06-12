/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 15:38:58 by tjeanner          #+#    #+#             */
/*   Updated: 2018/06/12 15:45:33 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(dst);
	while (dst[l + i] && src[i] && l + i < (int)size)
	{
		dst[l + i] = src[i];
		i++;
	}
	dst[l + i] = '\0';
	return (dst);
}
