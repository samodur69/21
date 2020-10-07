/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 11:12:25 by vmutteri          #+#    #+#             */
/*   Updated: 2020/10/06 11:29:30 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# define BUFF 30000

void	ft_putstr(char *str);
char	**ft_split(char *str);
int		ft_issep(char c);
int		ft_count_rows(char *str);
char	*ft_row_to_array(char *str);
char	**ft_split_rows(char *str);
int		ft_rowlen(char *str);
int		ft_atoi(char *str);
int		ft_count_column(char *str);
int		**ft_map_create(char *str, char *map_legend, int rows, int col);
char	*ft_strdup(char *src);
int		ft_min(int a, int b, int c);
int		**ft_solve_map(int **map, int row, int col);
int		ft_find_sq(int **sq, int *row, int *col, int sq_index[3]);
int		**ft_create_int_arr(int rows, int col);
char   **ft_map_return(int **sq, char **map_char, char *map_legend, int *rows, int *col);
char	*ft_process_first_row(char *src, int *rows_uslovie, char *map_legend);
void    ft_proccess_file(char *argv);

#endif
