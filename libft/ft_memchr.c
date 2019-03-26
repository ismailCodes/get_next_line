/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 22:22:14 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/18 15:58:02 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_;

	str_ = (unsigned char*)str;
	while (n)
	{
		if (*str_ == (unsigned char)c)
			return (str_);
		str_++;
		n--;
	}
	return (NULL);
}
