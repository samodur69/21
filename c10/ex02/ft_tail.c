/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:21:57 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/29 21:13:41 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int i;
	int fd;
	int t_len;
	int	f_len;

	f_len = 0;
	if (argc < 2 || ft_str_is_numeric(argv[2]) == 0)
		return (1);
	t_len = ft_char_to_nb(argv[2]);
	i = 3;
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
			ft_display_file(fd, f_len, t_len, argv[i]);
		close(fd);
		i++;
	}
	return (0);
}
