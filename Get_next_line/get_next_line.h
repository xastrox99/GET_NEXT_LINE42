/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:28:29 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/30 09:13:48 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*get_line(char **data);
char	*get_final_line(char **data);
int		ft_strchr(char *s, int c);
char	*ft_strdup(char *s1);
char	*ft_substr(char *s,
			unsigned int start, size_t len);

#endif
