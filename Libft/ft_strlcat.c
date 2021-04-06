/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:37:38 by ipenas            #+#    #+#             */
/*   Updated: 2021/03/26 14:58:19 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destsize;

	destsize = ft_strlen(dest);
	i = 0;
	if (size < destsize)
	{
		while (src[i])
			i++;
		return (size + i);
	}
	while (size > 0 && destsize < size - 1 && src[i])
		dest[destsize++] = src[i++];
	dest[destsize] = '\0';
	while (src[i++])
		destsize++;
	return (destsize);
}
