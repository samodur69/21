/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 13:59:19 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/29 14:01:34 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

# define BUFF_SIZE 30000

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_display_file(int fd);
void	ft_print_error(int en, char *argv);

#endif
