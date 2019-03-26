/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:56:23 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/29 22:12:04 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;

	new_str = NULL;
	i = 0;
	if (!(s1 && s2))
		return (NULL);
	if (s1 || s2)
	{
		new_str = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!new_str)
			return (NULL);
		while (*s1)
			new_str[i++] = *s1++;
		while (*s2)
			new_str[i++] = *s2++;
		new_str[i] = '\0';
	}
	return (new_str);
}
