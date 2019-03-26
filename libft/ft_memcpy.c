/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:09:24 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/15 15:22:43 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_;
	unsigned char	*src_;

	src_ = (unsigned char*)src;
	dst_ = (unsigned char*)dst;
	while (n)
	{
		*dst_ = *src_;
		src_++;
		dst_++;
		n--;
	}
	return (dst);
}
