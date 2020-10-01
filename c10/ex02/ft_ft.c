/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:59:39 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/29 21:22:20 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_error(int en, char *argv)
{
	ft_putstr("tail: ");
	ft_putstr(basename(argv));
	ft_putstr(": ");
	ft_putstr(strerror(en));
}

void	ft_display_file(int fd, int f_len, int arr_len, char *argv)
{
	int		ret;
	int		i;
	char	*buf;

	buf = malloc((f_len + 1) * 4);
	ret = read(fd, buf, (f_len));
	buf[ret] = '\0';
	ft_putstr("==> ");
	ft_putstr(basename(argv));
	ft_putstr(" <==");
	ft_putchar('\n');
	i = f_len - arr_len;
	while (i < f_len)
	{
		write(1, &buf[i], 1);
		i++;
	}
	ft_putchar('\n');
}

int		ft_atoi(char *str)
{
	int nb;
	int znak;

	znak = 1;
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
			return (znak * nb);
		}
		else if (*str == '-')
			znak *= (-1);
		str++;
	}
	return (0);
}

int		ft_file_size(char *argv)
{
	int		fd;
	int		f_len;
	int		ret;
	char	buf;

	f_len = 0;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((ret = read(fd, &buf, 1)) != '\0')
		f_len++;
	close(fd);
	return (f_len);
}
