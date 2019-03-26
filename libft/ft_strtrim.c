/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 19:33:57 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/29 16:19:21 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	char	*end;

	if (!s)
		return (NULL);
	end = (char*)s;
	end = end + ft_strlen(s) - 1;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (*end == ' ' || *end == '\n' || *end == '\t')
		end--;
	if (end <= s)
		return (ft_strdup(""));
	new = ft_strnew(end - s + 1);
	if (!new)
		return (NULL);
	ft_strncpy(new, s, (end - s + 1));
	return (new);
}
