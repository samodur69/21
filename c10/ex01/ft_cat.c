/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:59:57 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/29 14:14:32 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int i;
	int fd;

	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_print_error(errno, argv[i]);
			ft_putchar('\n');
		}
		else
			ft_display_file(fd);
		close(fd);
		i++;
	}
	return (0);
}
