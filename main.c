/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthidet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 10:49:52 by rthidet           #+#    #+#             */
/*   Updated: 2016/05/01 14:28:43 by lherbelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"


int			main(int ac, char **av)
{
	int i;
	int		fd;
	int		statu;
	char	*line;

	if (ac >= 2)
	{
		i = 1;
		while (av[i])
		{
			fd = open(av[i], O_RDONLY);
			while ((statu = get_next_line(fd, &line)) >= 0)
			{
				ft_putnbr(statu);
				ft_putstr(" | ");
				ft_putendl(line);
				if (statu == 0)
					break ;
			}
			if (statu == -1)
				ft_putendl("retour erreur");
			i++;
		}
	}
	return (0);
}
