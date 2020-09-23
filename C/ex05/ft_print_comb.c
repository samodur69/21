/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21school>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 20:04:50 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/17 23:11:05 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char a[3];

	a[0] = '0';
	while (a[0] <= '9')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '9')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, &a[0], 1);
				write(1, &a[1], 1);
				write(1, &a[2], 1);
				if ((a[0] == '7') & (a[1] == '8') & (a[2] == '9'))
					write(1, "\n ", 2);
				else
					write(1, ",  ", 2);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}