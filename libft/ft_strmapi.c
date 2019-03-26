/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 05:10:13 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/20 20:07:16 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_;
	char	*s__;
	size_t	i;
	int		j;

	j = 0;
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
			s_[i] = (*f)(j, s__[i]);
			i++;
			j++;
		}
		s_[i] = '\0';
	}
	return (s_);
}
