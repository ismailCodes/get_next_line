/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 15:31:41 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/18 23:42:17 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	char	*ptr;

	ptr = dest;
	while (len && *src)
	{
		*ptr = *src;
		ptr++;
		src++;
		len--;
	}
	while (len)
	{
		*ptr = '\0';
		len--;
		ptr++;
	}
	return (dest);
}
