/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 02:17:54 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/29 16:06:34 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*begin;

	if (!lst)
		return (NULL);
	if (!(fresh = malloc(sizeof(t_list))))
		return (NULL);
	fresh = f(lst);
	begin = fresh;
	while (lst->next)
	{
		fresh->next = f(lst->next);
		fresh = fresh->next;
		lst = lst->next;
	}
	return (begin);
}
