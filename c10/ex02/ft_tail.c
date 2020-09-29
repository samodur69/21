/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:21:57 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/29 14:22:06 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int i;
	int fd;
	int t_len;
	int	f_len;

	if (argc < 1)
		return (0);
	t_len = ft_char_to_nb(argv[2]); // work good
	i = 2; // change !!!!!!!!!
	while (i < argc)
	{
		f_len = ft_file_size(argv[i]);
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_print_error(errno, argv[i]);
			ft_putchar('\n');
		}
		else
			ft_display_file(fd, argv[i]);
		close(fd);
x		i++;
	}
	return (0);
}