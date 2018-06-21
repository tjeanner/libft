/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 17:03:59 by tjeanner          #+#    #+#             */
/*   Updated: 2018/06/13 17:07:35 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*p;

	if (!(p = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(p, size);
	return (p);
}
