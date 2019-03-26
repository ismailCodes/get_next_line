/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 20:24:54 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/29 16:07:35 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*t_new;

	if (!(t_new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		t_new->content = NULL;
		t_new->content_size = 0;
	}
	else
	{
		t_new->content = malloc(content_size);
		ft_memcpy(t_new->content, content, content_size);
		t_new->content_size = content_size;
	}
	t_new->next = NULL;
	return (t_new);
}
