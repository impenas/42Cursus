/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:08:34 by ipenas            #+#    #+#             */
/*   Updated: 2021/04/05 15:43:19 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*newsrc;
	unsigned char	*newdest;

	newsrc = (unsigned char *)src;
	newdest = (unsigned char *)dest;
	i = 0;
	if (src == dest)
		return (dest);
	if (newsrc < newdest)
	{
		while (n-- > 0)
		{
			newdest[n] = newsrc[n];
		}
	}
	else
	{
		while (i < n)
		{
			newdest[i] = newsrc[i];
			i++;
		}
	}
	return (newdest);
}
