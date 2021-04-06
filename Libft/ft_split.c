/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:50:40 by ipenas            #+#    #+#             */
/*   Updated: 2021/03/30 16:21:07 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	wcount(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i + 1] && s[i] != c)
			i++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**news;
	int		i;
	int		len;
	int		count;

	count = 0;
	len = 0;
	if (!s)
		return (0);
	news = malloc(sizeof(char *) * (wcount(s, c) + 1));
	if (!news)
		return (0);
	news[wcount(s, c)] = 0;
	while (*s && *s == c)
		s++;
	while (s[len])
	{
		i = len;
		while (s[len] && s[len] != c)
			len++;
		news[count++] = ft_substr(s, i, len - i);
		while (s[len] && s[len] == c)
			len++;
	}
	return (news);
}
