/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:11:22 by ielmoudn          #+#    #+#             */
/*   Updated: 2018/10/30 02:31:39 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s != '\0')
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			counter++;
		s++;
	}
	return (counter);
}

static char		*ft_get_start(char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

static char		*ft_get_end(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	size;
	char	**arr;
	char	*start;
	char	*end;
	char	*str;

	str = (char*)s;
	end = str;
	if (!str)
		return (NULL);
	size = ft_word_count(str, c) + 1;
	if (!(arr = (char**)malloc(size * sizeof(char*))))
		return (NULL);
	start = ft_get_start(str, c);
	size = 0;
	while (*start)
	{
		end = ft_get_end(start, c);
		arr[size] = (char*)ft_memalloc(end - start + 1);
		ft_strncpy(arr[size], start, (end - start));
		start = ft_get_start(end, c);
		size++;
	}
	arr[size] = 0;
	return (arr);
}
