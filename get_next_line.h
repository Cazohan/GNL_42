/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lherbelo <lherbelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 17:38:21 by lherbelo          #+#    #+#             */
/*   Updated: 2016/05/01 14:48:32 by lherbelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include "libft/libft.h"
#include <fcntl.h>


# define BUFF_SIZE 32

typedef struct		s_gnl
{
	char			*tmp;
	int				nb;
	char			*buff;
	char			*line;
}					t_gnl;

int					get_next_line(const int fd, char **line);

#endif
