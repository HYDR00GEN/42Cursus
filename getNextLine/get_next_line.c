/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:01:14 by marvin            #+#    #+#             */
/*   Updated: 2023/10/21 18:10:30 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_len(char *str)
{
	size_t	i;

	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*get_next_line(int fd)
{
	char		*out;
	static char	*str;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	str = ft_line_allocation(fd, str);
	if (!str)
		return (NULL);
	out = ft_next_line(str);
	str = ft_rem_line(str);
	return (out);
}

/*
int	main(void)
{
	char	*s;
	int	i;
	int	fd;

	fd = open("file.txt", O_RDONLY);
	i = 1;
	while (i < 15)
	{
		s = get_next_line(fd);
		printf("line [%02d]: %s", i, s);
		free(s);
		i++;
	}
	close(fd);
	return (0);
}
*/
