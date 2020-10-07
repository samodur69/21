/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_return.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:38:31 by vmutteri          #+#    #+#             */
/*   Updated: 2020/10/06 20:45:48 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_map_return(int **sq, char *map_char, char *map_legend, int *rows, int *col)
{
	int i;
	int j;
	int g;

	i = 0;
	j = 0;
	g = 0;
	while (i < *rows)
	{
		j = 0;
		while (j < *col)
		{
			if (sq[i][j] == 8)
				map_char[g] = map_legend[2];
			else if (sq[i][j] == 1)
				map_char[g] = map_legend[0];
			else if (sq[i][j] == 0)
				map_char[g] = map_legend[1];
			j++;
			g++;
		}
		map_char[g] = '\n';
		g++;
		i++;
	}
	map_char[g] = '\0';
	return (map_char);
}

int		**ft_map_create(char *str, char *map_legend, int rows, int col)
{
	int	i;
	int	j;
	int	**map;

	map = (int**)malloc(sizeof(int*) * (rows));
	i = 0;
	while (i < rows)
	{
		map[i] = (int*)malloc(sizeof(int) * (col));
		i++;
	}
	i = 0;
	while (*str && i < rows)
	{
		j = 0;
		while (ft_issep(*str) != 1 &&  j < col)
		{
			if (*str == map_legend[0])
				map[i][j] = 1;
			else if (*str == map_legend[1])
				map[i][j] = 0;
			str++;
			j++;
		}
		i++;
		str++;
	}
	return (map);
}

int		**ft_sq_findmax(int **sq, int *row, int *col)
{
	int x;
	int y;

	y = 1;
	while (y < *row)
	{
		x = 1;
		while (x < *col)
		{
			if (sq[y][x] == 1)
				sq[y][x] = ft_min(sq[y][x - 1], sq[y - 1][x - 1], sq[y - 1][x]) + 1;
			else
				sq[y][x] = 0;
			x++;
		}
		y++;
	}
	return (sq);
}

/* !!!!!!  insert pointers max_x max_y max_len */
int		**ft_find_sq(int **sq, int *row, int *col)
{
	int x;
	int y;
	int max_len;
	int max_x;
	int max_y;
	int *sq_index[3]

	ft_sq_findmax(sq, row, col);
	max_len = 0;
	max_y = 0;
	y = 0;
	while (y < *row)
	{
		x = 0;
		while (x < *col)
		{
			if (max_len < sq[y][x])
			{
				max_len = sq[y][x];
				max_x = x;
				max_y = y;
			}
			x++;
		}
		y++;
	}
	
	
	
	
	
	
	
	
	
	// y = max_y;
	// while (y > max_y - max_len)
	// {
	// 	x = max_x;
	// 	while (x > max_x - max_len)
	// 	{
	// 		sq[y][x] = 8;
	// 		x--;
	// 	}
	// 	y--;
	// }
	return (sq);
}

int ft_min(int a, int b, int c) 
{ 
    int min;
    
    min = a; 
    if (min > b)
        min = b; 
    if (min > c)  
        min = c; 
    return (min); 
} 