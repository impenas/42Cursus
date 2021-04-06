/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 15:26:03 by ipenas            #+#    #+#             */
/*   Updated: 2021/04/05 11:27:44 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*target;
	int		a;

	a = 0;
	target = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!target)
		return (0);
	while (src[a] != '\0')
	{
		target[a] = src[a];
		a++;
	}
	target[a] = '\0';
	return (target);
	free(target);
}
