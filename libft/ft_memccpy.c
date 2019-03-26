/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mft_memccpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 10:51:29 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/29 19:55:10 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr_todest;
	unsigned char	*ptr_tosrc;

	ptr_todest = (unsigned char*)dest;
	ptr_tosrc = (unsigned char*)src;
	while (n)
	{
		*ptr_todest = *ptr_tosrc;
		if (*ptr_tosrc == (unsigned char)c)
			return (ptr_todest + 1);
		ptr_todest++;
		ptr_tosrc++;
		n--;
	}
	return (NULL);
}
