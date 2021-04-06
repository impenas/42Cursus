/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 16:28:29 by ipenas            #+#    #+#             */
/*   Updated: 2021/04/05 15:03:04 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 != '\0' && *s2 != '\0') && ++i < n && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)*s1 - *s2);
}
