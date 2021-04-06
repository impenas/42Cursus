/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:42:08 by ipenas            #+#    #+#             */
/*   Updated: 2021/04/02 16:57:25 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i <= len)
	{
		c = 0;
		while (s2[c] == s1[c + i])
		{
			if ((c + i) == len)
				return (NULL);
			else if (s2[c + 1] == '\0')
				return (((char *)s1) + i);
			c++;
		}
		i++;
	}
	return (NULL);
}
