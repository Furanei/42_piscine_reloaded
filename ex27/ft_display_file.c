/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:53:40 by mbriffau          #+#    #+#             */
/*   Updated: 2016/11/09 23:00:55 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_read(char **av)
{
	int		fd;
	char	*buf[1];

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "open() error.\n", 14);
		return ;
	}
	while (read(fd, buf, 1))
		write(1, buf, 1);
	if (close(fd) == -1)
		write(1, "close() error.\n", 15);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac == 1)
			write(1, "File name missing.\n", 19);
		if (ac > 2)
			write(1, "Too many arguments.\n", 20);
		return (0);
	}
	ft_read(av);
	return (0);
}
