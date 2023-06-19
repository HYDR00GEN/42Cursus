/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <opaunas@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:31:16 by opaunas           #+#    #+#             */
/*   Updated: 2023/06/19 18:31:16 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	strlen;
	char	*tmp;

	strlen = ft_strlen(s);
	if (start >= strlen)
		return (ft_strdup(""));
	if (strlen < len)
		len = strlen;
	i = 0;
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	while (len-- && s[start])
		tmp[i++] = s[start++];
	tmp[i] = '\0';
	return (tmp);
}