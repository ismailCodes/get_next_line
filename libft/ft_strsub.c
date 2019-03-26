/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 21:57:08 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/29 22:15:29 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = (char*)malloc(len + 1);
	if (!new_str)
		return (NULL);
	if (s)
	{
		while (i < len)
		{
			new_str[i] = s[start + i];
			i++;
		}
		new_str[i] = '\0';
	}
	return (new_str);
}
