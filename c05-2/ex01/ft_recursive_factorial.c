/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:27:40 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/24 13:27:43 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 13)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
