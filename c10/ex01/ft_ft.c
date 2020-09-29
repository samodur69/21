/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 19:59:39 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/29 14:05:23 by vmutteri         ###   ########.fr       */
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
	ft_putstr("ft_cat: ");
	ft_putstr(basename(argv));
	ft_putstr(": ");
	ft_putstr(strerror(en));
}

void	ft_display_file(int fd)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	ret = read(fd, buf, BUFF_SIZE + 1);
	buf[ret] = '\0';
	ft_putstr(buf);
}
