/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lherbelo <lherbelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 01:10:39 by lherbelo          #+#    #+#             */
/*   Updated: 2016/04/27 15:55:09 by lherbelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>
# define BUFF_SIZE 8
# define MAX_FD 256

typedef struct		s_gnl
{
	char			*tmp;
	int				nb;
	char			*buff;
	char			*line[MAX_FD + 1];

}					t_gnl;

int					get_next_line(int const fd, char **line);

#endif
