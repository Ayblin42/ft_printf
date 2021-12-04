/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:01:41 by ayblin            #+#    #+#             */
/*   Updated: 2021/11/29 17:43:00 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*begin_list;
	t_list	*new;

	if (!f || !del)
		return (0);
	begin_list = NULL;
	while (lst)
	{
		new = ft_lstnew((f)(lst->content));
		if (!new)
			ft_lstclear(&begin_list, del);
		ft_lstadd_back(&begin_list, new);
		lst = lst->next;
	}
	return (begin_list);
}
