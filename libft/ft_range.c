/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 01:22:13 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/30 02:10:13 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int		*int_tab;
	int		length;
	int		i;

	i = 0;
	length = max - min;
	if (length <= 0)
		return (0);
	int_tab = (int*)malloc(length * sizeof(int));
	while (i <= length)
	{
		*(int_tab + i) = min + i;
		i++;
	}
	return (int_tab);
}
