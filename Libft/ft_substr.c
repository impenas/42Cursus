/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 09:49:59 by ipenas            #+#    #+#             */
/*   Updated: 2021/04/06 14:18:40 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		substr = malloc(sizeof(char));
		if (!substr)
			return (NULL);
		substr[0] = 0;
		return (substr);
	}
	if (ft_strlen(s) <= len)
	{
		substr = malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!substr)
			return (NULL);
	}
	else
		substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
