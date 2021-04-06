/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:59:43 by ipenas            #+#    #+#             */
/*   Updated: 2021/04/02 17:18:02 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void(*del)(void*))
{
	if (!lst || !del)
		return ;
	(del)(lst -> content);
	free(lst);
}
