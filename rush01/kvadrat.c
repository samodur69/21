/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kvadrat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 14:09:56 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/27 14:09:59 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define WIDTH 4
#define HEIGHT 4
#include <stdio.h>

int main(void)
{
    int row = 0;
    int col = 0;
    int kv[4][4];
    int x;
    
    x = 0;
    /* init kv */
    while (row < HEIGHT)
    {
        col = 0;
        while (col < WIDTH)
        {
            kv[row][col] = x + 1;
            col++;
            x++;
        }
        x = kv[row][col - 1];
        row++;
    
    }

    /* print kv */
    row = 0;
    col = 0;

    while (row < HEIGHT)
    {
        col = 0;
        while (col < WIDTH)
        {
            printf("%3d ", kv[row][col]);
            col++;
        }
        row++;
        printf("\n");
    }
    return (0);
}

