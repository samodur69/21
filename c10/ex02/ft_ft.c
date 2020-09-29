/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:59:39 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/29 14:15:12 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <libgen.h>
#define BUFF_SIZE 30000

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_print_error(int en, char *argv)
{
	ft_putstr("tail: ");
	ft_putstr(basename(argv));
	ft_putstr(": ");
	ft_putstr(strerror(en));
}

void	ft_display_file(int fd, int nb, char *argv)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	char	*buf_print;
	int		file_len;

	file_len = 0;
	while (ret = read(fd, buf, BUFF_SIZE + 1))
		file_len++;
	buf_print = malloc(nb * 4);
	ft_putstr("==> ");
	ft_putstr(basename(argv));
	ft_putstr(" <==");
	ft_putchar('\n');
	
	
	ft_putstr(buf);
	
	
	ft_putchar('\n');
}

int	ft_char_to_nb(char *str)
{
	int nb;
	
	nb = 0;
	while (*str)
	{
		if ((*str >= '0' && *str <= '9'))
		{
			while (*str >= '0' && *str <= '9')
			{
				nb = (nb * 10) + (*str - '0');
				str++;
			}
			return (nb);
		}
		str++;
	}
	return (0);
}

/*int		ft_file_size(char *argv)
{
	int		fd;
	int		f_len;
	int		ret
	char	buf[BUFF_SIZE+1]

	fd = open(argv[i], O_RDONLY);
	if (fd == -1)
		return (0);
	while (ret = read(fd, buf, BUFF_SIZE + 1))
		f_len++;
	close(fd);
	return (f_len);
}*/