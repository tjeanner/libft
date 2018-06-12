/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 16:36:54 by tjeanner          #+#    #+#             */
/*   Updated: 2018/06/12 16:44:39 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		a;
	int		i;

	if (!needle[0])
		return ((char *)haystack);
	a = 0;
	while (haystack[a])
	{
		i = 0;
		while (needle[i] && haystack[a + i] == needle[i])
			i++;
		if (!needle[i])
			return (&((char *)haystack)[a]);
		a++;
	}
	return (NULL);
}
