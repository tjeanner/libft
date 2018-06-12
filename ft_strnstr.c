/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 16:46:18 by tjeanner          #+#    #+#             */
/*   Updated: 2018/06/12 17:07:15 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	i;

	if (!needle[0])
		return ((char *)haystack);
	a = 0;
	while (haystack[a] && len > a)
	{
		i = 0;
		while (len > a + i && needle[i] && haystack[a + i] == needle[i])
			i++;
		if (!needle[i])
			return (&((char *)haystack)[a]);
		a++;
	}
	return (NULL);
}
