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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_hs;
	size_t	len_nd;
	size_t	len_tmp;
	size_t	i;

	if (needle[0] == '\0')
		return ((char *)haystack);
	len_hs = ft_strlen(haystack);
	len_nd = ft_strlen(needle);
	if (len_hs < len_nd || len < len_nd)
		return (0);
	if (len_hs > len)
		len_tmp = len;
	else
		len_tmp = len_hs;
	i = 0;
	while (i + len_nd <= len_tmp)
	{
		if (ft_strncmp(haystack + i, needle, len_nd) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}