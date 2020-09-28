/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:14:07 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/28 20:20:05 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFF_SIZE 1024

void	ft_read_file(int fd);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int fd;

	(void)argc;
	(void)argv;
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	ft_read_file(fd);
	if (close(fd) == -1)
		return (1);
	return (0);
}

void	ft_read_file(int fd)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	ret = read(fd, buf, BUFF_SIZE + 1);
	buf[ret] = '\0';
	ft_putstr(buf);
}
