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

int     **ft_init_squre(int **map, int row, int col)
{
    int x;
    int y;
    int square[row][col];
    x = 0;
    y = 0;
    while (y < row)
    {
        square[row][0] = map[row][0];
        y++;
    }
    while (x < col)
    {
        square[0][x] = map[0][x];
        x++;
    }
    return (square)
}


/* !!!!!!  insert pointers max_x max_y max_len */
int     **ft_find_sq(int **map, int **sq, int row, int col)
{
    // solve square
    int x;
    int y;
    
    y = 1; 
    while (y < row)
    {
        x = 1;
        while (x < col)
        {
            if (map[y][x] == 1)
                sq[y][x] = ft_min(sq[y][x - 1], sq[y - 1][x - 1], sq[y - 1][x]);
            else
                sq[y][x] = 0;
            x++;
        }
        y++;
    }
    // find max square
    int max_len;
    int max_x;
    int max_y;

    max_len = 0;
    max_y = 0;
    while (y < row)
    {
        max_x = 0;
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
    // print 9 to solved pos
    y = max_y;
    while(y > max_y - max_len)
    {
        x = max_x;
        while (x > max_x - max_len)
        {
            sq[y][x] = 9;
            x--;
        }
        y--;
    }
    return (&sq)
}



int     **ft_solve_map(int **map, int row, int col)
{
    // int x;
    // int y;
    int square[row][col];
    // int max_len;
    // int max_x;
    // int max_y;
    //sqaure = ft_init_squre(map, row, col);
    square = ft_find_sq(map, ft_init_square(map, row, col), row, col);
    return (&square)
}