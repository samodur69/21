/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 09:53:45 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/22 10:08:47 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	printnb(int nb)
{
	if (nb <0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb / 10)
		printnb(nb / 10);
	ft_putchar(nb % 10 + '0');

}
