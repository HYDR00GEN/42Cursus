/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <opaunas@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 07:48:56 by opaunas           #+#    #+#             */
/*   Updated: 2023/06/19 07:48:56 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;
	char	*s;

	if (dst == src)
		return (dst);
	i = 0;
	tmp = dst;
	s = (char *)src;
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	return (tmp);
}
