/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 18:44:54 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/15 19:08:59 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t len)
{
	char	*s2_;
	char	*str;

	s2_ = (char*)s2;
	str = s1;
	while (*str)
		str++;
	while (*s2_ && len)
	{
		*str = *s2_;
		str++;
		s2_++;
		len--;
	}
	*str = '\0';
	return (s1);
}
