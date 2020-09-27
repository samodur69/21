/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 11:29:50 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/23 19:20:15 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;
	int i;

	res = 1;
	i = 1;
	if (nb < 0 || nb > 13)
		return (0);
	else if (nb == 0)
		return (1);
	else
		while (i <= nb)
		{
			res *= i;
			i++;
		}
	return (res);
}
