/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 20:00:20 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/28 21:37:47 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFF_SIZE 30720

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_punbr(int nb);
void	ft_strcmp(char *s1, char *s2);
void	ft_display_file(int fd);
int		ft_open_file(char *filename);
char	*ft_strcat(char *dest, char *src);
char	ft_read_from_file(int fd);

int		main(int argc, char **argv)
{
	int i;
	int ret;
	char buff[BUFF_SIZE];

	if (argc < 1)
		ft_putstr("None"); //  nothing to do
	else if (argc == 2)
	{
		ft_display_file(ft_open_file(argv[1]));
		if (clode(fd) == -1)
		{
			ft_putstr("OSHIBKA");  // otrabotka oshibki
			return (1);
		}
	}
	i = 1;
	while (argv[i] != '>' || argv[i] != '\0')
	{
		ft_open_file(argv[i]);
		ft_strcat(buff, ft_read_from_file(fd));
		if (clode(fd) == -1)
		{
			ft_putstr("OSHIBKA");  // otrabotka oshibki
			return (1);
		}
		i++;
	}
// дошли до знака или до конца аргументов

}

int		ft_open_file(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n"); // прописать ошибку если нет файла
 		return (1);
	}
	return (fd);
}

void	ft_display_file(int fd)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];

	ret = read(fd, buf, BUFF_SIZE + 1);
	buf[ret] = '\0';
	ft_putstr(buf);
}

char	*ft_strcat(char *dest, char *src)
{
	int id;
	int is;

	id = 0;
	is = 0;
	while (dest[id] != '\0')
		id++;
	while (src[is] != '\0')
	{
		dest[id] = src[is];
		is++;
		id++;
	}
	dest[id] = '\0';
	return (dest);
}

char	ft_read_from_file(int fd)
{
	char	*buf;
	int		ret;

	ret = (fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	return (*buf);
}

//void	fr_write_to_file(char *filename, char buff)