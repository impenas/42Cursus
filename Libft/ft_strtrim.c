/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:26:01 by ipenas            #+#    #+#             */
/*   Updated: 2021/03/30 16:14:44 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1 + start);
	if (end)
	{
		while (s1[end + start - 1] && ft_strchr(set, s1[end + start - 1]))
			end--;
	}
	s2 = malloc(sizeof(char) * end + 1);
	if (!s2)
		return (NULL);
	ft_strncpy(s2, (char *)s1 + start, end);
	s2[end] = '\0';
	return (s2);
}
