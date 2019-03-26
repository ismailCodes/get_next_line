/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 01:09:15 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/29 16:15:58 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s_;
	char	*s__;
	size_t	i;

	i = 0;
	s__ = NULL;
	s_ = NULL;
	if (s && f)
	{
		s__ = (char*)s;
		s_ = (char*)malloc(ft_strlen(s) + 1);
		if (s_ == NULL)
			return (NULL);
		while (s__[i])
		{
			s_[i] = (*f)(s__[i]);
			i++;
		}
		s_[i] = '\0';
	}
	return (s_);
}
