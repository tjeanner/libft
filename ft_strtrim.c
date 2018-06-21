/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 16:47:21 by tjeanner          #+#    #+#             */
/*   Updated: 2018/06/21 15:02:52 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		o;
	char	*new;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	o = ft_strlen(s) - 1;
	while (s[o] && (s[o] == ' ' || s[o] == '\n' || s[o] == '\t'))
		o--;
	if (o <= i || !(new = (char *)malloc(sizeof(char) * (o - i + 2))))
		return (NULL);
	ft_strncpy(new, s + i, o - i + 1);
	new[o - i + 1] = '\0';
	return (new);
}
