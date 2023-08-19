/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 23:10:28 by marvin            #+#    #+#             */
/*   Updated: 2023/06/19 23:10:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;

	if (del && lst && *lst)
	{
		while (lst && *lst)
		{
			i = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = i;
		}
	}
}
