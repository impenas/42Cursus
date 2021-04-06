/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:45:46 by ipenas            #+#    #+#             */
/*   Updated: 2021/04/06 14:34:30 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void*))
{
	t_list	*t;
	t_list	*temp;

	t = *lst;
	while (t)
	{
		temp = t -> next;
		ft_lstdelone(t, del);
		t = temp;
	}
	*lst = NULL;
}
