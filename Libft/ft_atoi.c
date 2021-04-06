/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 08:53:14 by ipenas            #+#    #+#             */
/*   Updated: 2021/03/26 14:52:50 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				index;
	int				sign;
	long long int	number;

	index = 0;
	sign = 1;
	number = 0;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index++] == '-')
			sign = -1;
	}
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
		{
			number *= 10;
			number += (str[index++] - 48);
		}
		else
			return (number * sign);
	}
	return (number * sign);
}
