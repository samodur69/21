/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:26:53 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/30 22:07:46 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int b;
	int m;

	i = 1;
	b = 1;
	m = 1;
	if (length == 1)
		return (1);
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) <= 0)
			b++;
		if (f(tab[i - 1], tab[i]) >= 0)
			m++;
		i++;
	}
	if (b == length || m == length)
		return (1);
	else
		return (0);
}
