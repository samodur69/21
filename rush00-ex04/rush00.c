/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 23:38:12 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/20 23:42:06 by vmutteri         ###   ########.fr       */
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
			if ((o == 1 && v == 1) || (o == x && v == 1) || (o == 1 && v == y))
				ft_putchar('o');
			:welse if ((v == y && o == x) || (v == 1 && o == 1))
				ft_putchar('/');
			else if (v > 1 && o > 1 && v < y && o < x)
				ft_putchar(' ');
			else if ((o == 1 && v == y) || (o == x && v == 1))
				ft_putchar('\\');
			else
				ft_putchar('*');
			o++;
		}
		ft_putchar('\n');
		o = 1;
		v++;
	}
}
