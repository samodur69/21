/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:50:30 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/23 22:11:09 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;
	int i;
	int max_power;

	i = 1;
	res = 2;
	while (i < 31 && res < nb)
	{
		res *= 2;
		i++;
	}
	max_power = 32 / i;
	i = 1;
	res = 1;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0 || (power > max_power))
		return (0);
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
