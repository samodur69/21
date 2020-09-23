/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmuttering@student.21-sch>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 23:22:08 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/20 23:35:40 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int o;
	int v;

	o = 1;
	v = 1;
	while (v <= y)
	{
		while (o <= x)
		{
			if ((v == y && o == 1) || (v == 1 && o == 1))
				ft_putchar('A');
			else if (v > 1 && o > 1 && v < y && o < x)
				ft_putchar(' ');
			else if ((o == x && v == y) || (o == x && v == 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			o++;
		}
		ft_putchar('\n');
		o = 1;
		v++;
	}
}
