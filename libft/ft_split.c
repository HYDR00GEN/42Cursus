/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <opaunas@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:34:13 by opaunas           #+#    #+#             */
/*   Updated: 2023/06/19 18:34:13 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_split_size(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s != c)
		{
			len++;
			while (*s && *s != c)
				s++;
		}
		if (*s)
			s++;
	}
	return (len);
}

char	**ft_split_process(char const *s, char c, char **tmp, size_t i)
{
	char	*start;

	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			tmp[i] = (char *)malloc(sizeof(char) * (s - start + 1));
			if (!tmp[i])
				return (NULL);
			ft_strlcpy(tmp[i++], start, s - start + 1);
		}
		if (*s)
			s++;
	}
	tmp[i] = NULL;
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	size_t	i;

	if (!s)
		return (NULL);
	tmp = (char **)malloc(sizeof(char *) * (ft_split_size(s, c) + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	tmp = ft_split_process(s, c, tmp, i);
	return (tmp);
}