/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:38:12 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/30 21:57:56 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *array;

	i = 0;
	array = (int*)malloc(4 * length);
	if (array)
	{
		while (i < length)
		{
			array[i] = f(tab[i]);
			i++;
		}
	}
	return (*array);
}
