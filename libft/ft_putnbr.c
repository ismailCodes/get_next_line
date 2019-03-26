/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 02:42:58 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/29 16:09:00 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-');
		num = num * -1;
	}
	if (num >= 0)
	{
		if (num < 10)
			ft_putchar(num + '0');
		else
		{
			ft_putnbr(num / 10);
			ft_putnbr(num % 10);
		}
	}
}
