/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 14:14:35 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/24 13:28:06 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max_power(int nb);

int		ft_recursive_power(int nb, int power)
{
	int max_power;

	max_power = ft_max_power(nb);
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power < 0 || (power > max_power))
		return (0);
	else if (power == 1)
		return (nb);
	if (power % 2 == 0)
		return (ft_recursive_power(nb * nb, power / 2));
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int		ft_max_power(int nb)
{
	int i;
	int res;

	i = 1;
	res = 2;
	while (i < 31 && res < nb)
	{
		res *= 2;
		i++;
	}
	return (32 / i);
}
