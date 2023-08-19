/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <opaunas@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 07:44:34 by opaunas           #+#    #+#             */
/*   Updated: 2023/06/19 07:44:34 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!len && !big)
		return (0);
	while (big[i] && (i < len))
	{
		while ((big[i + j] == little[j]) && little[j] && ((i + j) < len))
			j += 1;
		if (!little[j])
			return ((char *)&big[i]);
		j = 0;
		i += 1;
	}
	if (!little[0])
		return ((char *)&big[i]);
	return (NULL);
}
