/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lherbelo <lherbelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 17:37:07 by lherbelo          #+#    #+#             */
/*   Updated: 2016/05/01 14:48:24 by lherbelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

static int		ft_read(t_gnl *gnl)
{
	int			i;

	i = 0;
	while(gnl->line[i] != '\n' && gnl->line[i] != '\0')
		i++;
	return (i);
}

static void		ft_save(t_gnl *gnl, int fd)
{
	if (gnl->line == NULL)
		gnl->line = ft_strnew(1);
	while (!(ft_strchr(gnl->line, '\n')) &&
			(gnl->nb = read(fd, gnl->buff, BUFF_SIZE)) > 0)
	{
		gnl->buff[gnl->nb] = '\0';
		gnl->tmp = gnl->line;
		gnl->line = ft_strjoin(gnl->line, gnl->buff);
		ft_strdel(&gnl->tmp);
	}
	ft_strdel(&gnl->buff);
}

int				get_next_line(const int fd, char **line)
{
	static t_gnl	gnl;
	if (fd < 0 || line == NULL || !(gnl.buff = (char *)ft_memalloc
				(sizeof(char)* BUFF_SIZE + 1)))
		return (-1);
	ft_save(&gnl, fd);
	if (gnl.nb == -1)
		return(-1);
	*line = ft_strsub(gnl.line, 0, ft_read(&gnl));
	if (ft_strchr(gnl.line, '\n'))
	{
		gnl.tmp = gnl.line;
		gnl.line = ft_strdup(ft_strchr(gnl.line, '\n') + 1);
		ft_strdel(&gnl.tmp);
		return (1);
	}
	return (0);
}
