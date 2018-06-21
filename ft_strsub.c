/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 16:32:23 by tjeanner          #+#    #+#             */
/*   Updated: 2018/06/21 15:02:31 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!(new = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strncpy(new, s + start, len);
	new[len] = '\0';
	return (new);
}
