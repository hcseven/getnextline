/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseven <hseven@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:40:01 by hseven            #+#    #+#             */
/*   Updated: 2022/08/03 14:12:19 by hseven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 123
# endif

# include <unistd.h>
# include <stdlib.h>

int		ft_check(char *s);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*get_read(char	*s, int fd);
char	*find_nl(char *str);
char	*get_next_line(int fd);
char	*last(char *str);

#endif