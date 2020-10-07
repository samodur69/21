/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 11:23:31 by vmutteri          #+#    #+#             */
/*   Updated: 2020/10/06 20:46:40 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_issep(char c)
{
	return (c == '\n');
}

int		ft_atoi(char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
				*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

char	*ft_process_first_row(char *src, int *rows_uslovie, char *map_legend)
{
	int		i;
	int		len;
	char	*for_atoi;

	i = 0;
	len = 0;
	while (src[len] != '\n')
		len++;
	for_atoi = malloc(sizeof(*for_atoi) * (len + 1));
	if (for_atoi == NULL)
		return (NULL);
	map_legend[2] = src[len - 1];
	map_legend[1] = src[len - 2];
	map_legend[0] = src[len - 3];
	map_legend[3] = '\0';
	while (i < len - 2)
	{
		for_atoi[i] = src[i];
		i++;
	}
	for_atoi[i] = '\0';
	*rows_uslovie = ft_atoi(for_atoi);
	printf("%d - stroki uslovie\n", *rows_uslovie);
	printf("%c - pustoe\n", map_legend[0]);
	printf("%c - prepjatsvie\n", map_legend[1]);
	printf("%c - zakrasit\n", map_legend[2]);
	return (map_legend);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	dest = malloc(sizeof(*dest) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (*src && ft_issep(*src) != 1)
		src++;
	src++;
	while (i < len)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

