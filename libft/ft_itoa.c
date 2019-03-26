/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 21:10:38 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/29 22:55:38 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*fraiche;
	long int	nb;

	nb = n;
	if (!(fraiche = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (nb == -2147483648)
		return (ft_strcpy(fraiche, "-2147483648"));
	if (nb < 0)
	{
		fraiche[0] = '-';
		fraiche[1] = '\0';
		fraiche = ft_strjoin(fraiche, ft_itoa(-nb));
	}
	if (nb >= 10)
		fraiche = ft_strjoin(ft_itoa(nb / 10), ft_itoa(nb % 10));
	if (nb >= 0 && nb < 10)
	{
		fraiche[0] = nb + 48;
		fraiche[1] = '\0';
	}
	return (fraiche);
}
