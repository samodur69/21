/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:52:38 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/23 20:20:31 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int i;
	int num;

	i = 2;
	num = nb;
	if (nb <= 0 || nb == 1)
		return (2);
	else if (nb == 2)
		return (3);
	else if (nb == 3)
		return (5);
	while (num)
	{
		if (ft_is_prime(num) == 1)
			return (num);
		num++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
