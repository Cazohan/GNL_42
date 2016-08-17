/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lherbelo <lherbelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 12:23:48 by lherbelo          #+#    #+#             */
/*   Updated: 2016/08/17 12:47:46 by lherbelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32
#include "./libft/libft.h"
#include <fcntl.h>
#include <sys/types.h>

typedef struct		s_gnl
{
	char			*line[MAX_FD + 1];
	char			*buff;
	char			*tmp;
	int				nb;
}					t_gnl;

int					get_next_line(int const fd, char **line);

#endif
