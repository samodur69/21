/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 11:13:38 by vmutteri          #+#    #+#             */
/*   Updated: 2020/10/06 11:14:24 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./srcs/ft.h"

void    print_test_int_arr(int **map, int *rows, int *cols);

int     main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int     fd;
    int     ret;
    char    buf[BUFF];
    int     nb_rows;
    int     nb_col;
    char    map_legend[4];
    char    *map_char;
    int     **map;


    // Pointers to rows/cols
    int     rows_uslovie;
    int     *p_rows;
    int     *p_col;
    int     *p_row_u;
    p_rows = &nb_rows;
    p_col = &nb_col;
    p_row_u = &rows_uslovie;

    /* Timer. Dont forget to remove */
    clock_t tic = clock();
    
    
    fd = open("./maps/map_test", O_RDONLY);
    if (fd == -1)
        return 1;
    ret = read(fd, buf, BUFF);
    buf[ret] = '\0';
    
    
    
    
    /* remove first row fill legend, return resized free buf */
    map_char = ft_strdup(buf);
    rows_uslovie = 0;
    ft_process_first_row(buf, p_row_u, map_legend);
    printf("%d - stroki uslovie\n", rows_uslovie);
    printf("%s \n", map_char);
    
    
    
    /* count rows & col */
    nb_rows = ft_count_rows(map_char);
    nb_col = ft_count_column(map_char);
    printf("%d  - number of rows\n", nb_rows);
    printf("%d  - number of columns\n", nb_col);
    
    
    
    /* Check Map Need HErre */
    map = ft_map_create(map_char, map_legend, nb_rows, nb_col);
     /* Print int arr */
    // printf("ARRAY CONVERTED");
    // printf("\n");
    // print_test_int_arr(map, p_rows, p_col);
    // printf("\n");
    // printf("\n");
    // /* Print int arr */
    // printf("ARRAY FINAL ARRAY");
    // printf("\n");
    // print_test_int_arr(map, p_rows, p_col);
    
    /* Print solved matrix */
    ft_find_sq(map, p_rows, p_col);
    ft_map_return(map, map_char, map_legend, p_rows, p_col);
    printf("%s \n", map_char);
    
    
    /* timer. Dont forget to remove */
    clock_t toc = clock();
    printf(" Elapsed time : %f seconds \n", (double)(toc - tic) / CLOCKS_PER_SEC);
    return (0);
}

void    print_test_int_arr(int **map, int *rows, int *cols)
{
    int i, j;

    i = 0;
    while (i < *rows)
    {
        j = 0;
        while (j < *cols)
        {
            printf("%3d", map[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
}

int		ft_count_column(char *str)
{
	int	nb_col;
	
    nb_col = 0;
    while (*str && ft_issep(*str) != 1)
    {
        nb_col++;
        str++;
    }
	return (nb_col);
}

/* count rows to malloc memory and check map */
int		ft_count_rows(char *str)
{
	int	nb_row;
	
    nb_row = 0;
	while (*str)
	{
		while (*str && ft_issep(*str) != 1)
			str++;
        nb_row++;
        str++;
	}
	return (nb_row);
}



/* print error message */
void    ft_map_error(void)
{
    write(2, "map error\n", 10);
}




///////////////////////////////////////////////////////////////////////////////////////////////////////////////