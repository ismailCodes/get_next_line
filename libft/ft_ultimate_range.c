/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 01:58:22 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/30 02:26:20 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*str;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	str = (int*)malloc(sizeof(int) * (max - min));
	if (str == 0)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	while (i < max)
	{
		str[i - min] = i;
		i++;
	}
	*range = str;
	return (max - min);
}
