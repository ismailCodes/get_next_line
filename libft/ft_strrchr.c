/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstrrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 23:26:58 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/19 01:42:18 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str_;
	size_t	ret;

	ret = 0;
	str_ = (char*)str;
	while (*str_)
	{
		str_++;
		ret++;
	}
	if ((char)c == '\0')
		return ((char*)str_);
	str_--;
	while (*str_ && ret)
	{
		if (*str_ == (char)c)
			return (str_);
		str_--;
		ret--;
	}
	return (NULL);
}
