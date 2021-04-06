/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:42:10 by ipenas            #+#    #+#             */
/*   Updated: 2021/03/17 15:09:26 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned int	index;
	unsigned char	*memory;

	memory = s;
	index = 0;
	while (index < n)
	{
		memory[index++] = 0;
	}
	return (memory);
}
