/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:01:14 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 08:36:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <unistd.h>        // Provides file operations
# include <stdio.h>         // Provides input and output functions
# include <stddef.h>       // Defines data types like size_t
# include <sys/types.h>    // Data types used by system calls
# include <fcntl.h>        // File control options
# include <stdlib.h>       // Standard library functions

size_t	ft_len(char *str);
char	*ft_next_line(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_rem_line(char *line);
char	*get_next_line(int fd);
char	*ft_line_allocation(int fd, char *str);
#endif