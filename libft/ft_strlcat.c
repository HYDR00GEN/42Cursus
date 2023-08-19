/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <opaunas@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 07:40:08 by opaunas           #+#    #+#             */
/*   Updated: 2023/06/19 07:40:08 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	if (!dstsize && !dst)
		return (0);
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize == 0 || dlen >= dstsize)
		return (slen + dstsize);
	while (src[i] && (dlen + i + 1 < dstsize))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
