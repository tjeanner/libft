/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 12:57:23 by tjeanner          #+#    #+#             */
/*   Updated: 2018/06/12 13:31:39 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (dst > src)
			((char *)dst)[n - i - 1] = ((char *)src)[n - i - 1];
		else
			((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
