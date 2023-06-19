/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 23:16:50 by marvin            #+#    #+#             */
/*   Updated: 2023/06/19 23:16:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;

	if (!lst)
		return (0);
	new_list = ft_lstnew(f(lst->content));
	temp = new_list;
	while (lst->next != 0)
	{
		lst = lst->next;
		if (!(lst->content))
			del(lst->content);
		new_list->next = ft_lstnew(f(lst->content));
		new_list = new_list->next;
	}
	return (temp);
}