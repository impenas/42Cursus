/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:21:45 by ipenas            #+#    #+#             */
/*   Updated: 2021/03/17 11:19:58 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int arg)
{
	if (arg >= 97 && arg <= 122)
		return (arg -= 32);
	else
		return (arg);
}
