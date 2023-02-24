/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:00:12 by fakman            #+#    #+#             */
/*   Updated: 2023/02/24 19:00:12 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
int		newline_counter(char *raw_str);
char	*ft_strjoin(char *left_str, char *buff);
char	*ft_strchr(char *str, int c);
int		count_after_nl(char *raw_str);
char	*get_raw_line(int fd, char *raw_str);
char	*get_refined_str(char *raw_str);
char	*get_new_raw_str(char *raw_str);
char	*get_next_line(int fd);

#endif