/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipenas <ipenas@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:03:41 by ipenas            #+#    #+#             */
/*   Updated: 2021/04/06 15:02:01 by ipenas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*t;

	new = NULL;
	while (lst && f && del)
	{
		t = ft_lstnew((*f)(lst -> content));
		if (!t)
		{
			while (new)
			{
				t = new -> next;
				(*del)(new -> content);
				free (new);
				new = t;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new, t);
		lst = lst -> next;
	}
	return (new);
}
