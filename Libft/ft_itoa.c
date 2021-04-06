/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:03:47 by ipenas            #+#    #+#             */
/*   Updated: 2021/04/06 12:43:08 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr < len)
		len += 1;
	if (nbr == 0)
		len = 1;
	while (nbr != '\0')
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nsize;
	long	nbr;

	nbr = n;
	nsize = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (nsize + 1));
	if (!str)
		return (NULL);
	str[nsize] = '\0';
	if (!n)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		str[--nsize] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
