#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFF 30000

void    ft_putstr(char *str);
char	**ft_split(char *str);
int		ft_issep(char c);
int		ft_count_rows(char *str);
char	*ft_row_to_array(char *str);
char	**ft_split_rows(char *str);
int     ft_rowlen(char *str);
int     ft_atoi(char *str);
int		ft_count_column(char *str);
int     **ft_map_create(char *str, char *map_legend, int rows, int col);
char	*ft_strdup(char *src);
int     ft_min(int a, int b, int c);
int     **ft_solve_map(int **map, int row, int col);
int     **ft_find_sq(int **sq, int row, int col);
int     **ft_create_arr(int rows, int col);

int     main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int     fd;
    int     ret;
    char    buf[BUFF];
    int     nb_rows;
    int     nb_col;
	int     i, j;
    int     rows_uslovie;
    char    map_legend[4];
    char    *map_char;
    int     **map;
    int     **solved_map;

    fd = open("./maps/map_test", O_RDONLY);
    if (fd == -1)
        return 1;
    ret = read(fd, buf, BUFF);
    buf[ret] = '\0';
    rows_uslovie = ft_atoi(&buf[0]);
    map_legend[0] = buf[1];
    map_legend[1] = buf[2];
    map_legend[2] = buf[3];
    map_legend[3] = '\0';

    //printf("%c   -  prepjatstvie  \n", map_legend[2]);
    /* remove first row */
    map_char = ft_strdup(buf);
    printf("%s \n", map_char);

    /* count rows & col */
    nb_rows = ft_count_rows(map_char);
    nb_col = ft_count_column(map_char);
    printf("%d  - number of rows\n", nb_rows);
    printf("%d  - number of columns\n", nb_col);

    /* Check Map Need HErre */
    map = ft_map_create(map_char, map_legend, nb_rows, nb_col);
     /* Print int arr */
    printf("ARRAY CONVERTED");
    printf("\n");
    
    i = 0;
    while (i < nb_rows)
    {
        j = 0;
        while (j < nb_col)
        {
            printf("%3d", map[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    printf("\n");
    printf("\n");
    solved_map = ft_find_sq(map, nb_rows, nb_col);
    
    /* Print int arr */
    
    
    printf("ARRAY FINAL ARRAY");
    printf("\n");
    
    
    i = 0;
    while (i < nb_rows)
    {
        j = 0;
        while (j < nb_col)
        {
            printf("%3d", map[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
}

int     **ft_create_arr(int rows, int col)
{
    int i;
    int **arr;

    arr = (int**)malloc(sizeof(int*) * (rows));
    i = 0;
    while (i < rows)
    {
        arr[i] = (int*)malloc(sizeof(int) * (col));
        i++;
    }
    return (arr);
}



int     **ft_map_create(char *str, char *map_legend, int rows, int col)
{
    int i;
    int j;
    int **map;

    map = (int**)malloc(sizeof(int*) * (rows));
    i = 0;
    while (i < rows)
    {
        map[i] = (int*)malloc(sizeof(int) * (col));
        i++;
    }
    i = 0;
    j = 0;
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


void    ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

/* for BSQ insert variable separator */
int		ft_issep(char c)
{
	return (c == '\n');
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

int	ft_atoi(char *str)
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

/* !!!!!!  insert pointers max_x max_y max_len */
int **ft_find_sq(int **sq, int row, int col)
{
    int x;
    int y;
    int max_len;
    int max_x;
    int max_y;
    int i, j;

    //solve square    
    y = 1; 
    while (y < row)
    {
        x = 1;
        while (x < col)
        {
            if (sq[y][x] == 1)
                sq[y][x] = ft_min(sq[y][x - 1], sq[y - 1][x - 1], sq[y - 1][x]) + 1;
            else
                sq[y][x] = 0;
            x++;
        }
        y++;
    }
    
     /* Print int arr */
    printf("ARRAY AFTER SOLVING min + 1");
    printf("\n");
    i = 0;
    while (i < row)
    {
        j = 0;
        while (j < col)
        {
            printf("%3d", sq[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    //find max square
    max_len = 0;
    max_y = 0;
    y = 0;
    while (y < row)
    {
        x = 0;
        while (x < col)
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
    printf("\n");
    printf("%d  - len square\n", max_len);
    printf("%d  - y position\n", max_y);
    printf("%d  - x position\n", max_x);
    printf("\n");

    ///print 9 to solved pos
    y = max_y;
    while(y > max_y - max_len)
    {
        x = max_x;
        while (x > max_x - max_len)
        {
            sq[y][x] = 8;
            x--;
        }
        y--;
    }
    return (sq);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////