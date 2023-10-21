/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:01:14 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 08:36:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <sys/types.h>
# include <fcntl.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

size_t	ft_len(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_next_line(char *str);
char	*ft_rem_line(char *line);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_line_allocation(int fd, char *str);
char	*get_next_line(int fd);

# endif