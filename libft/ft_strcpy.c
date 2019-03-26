/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 14:29:04 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/15 15:31:19 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	tmp[ft_strlen(src) + 1];
	size_t	length;

	length = ft_strlen(src) + 1;
	ft_memcpy(tmp, src, length);
	ft_memcpy(dest, tmp, length);
	return (dest);
}
