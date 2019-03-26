/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:27:37 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/30 00:48:01 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*newdest;
	unsigned char	*newsrc;

	i = 0;
	newdest = (unsigned char*)dst;
	newsrc = (unsigned char*)src;
	if (dst > src)
	{
		while (n)
		{
			n--;
			newdest[n] = newsrc[n];
		}
	}
	else
		ft_memcpy(newdest, newsrc, n);
	return (dst);
}
