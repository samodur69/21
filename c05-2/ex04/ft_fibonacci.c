/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:38:06 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/24 13:29:45 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (1);
	else if (index < 0)
		return (-1);
	else if (index > 47)
		return (0);
	else
		return ((ft_fibonacci(index - 1) + ft_fibonacci(index - 2)));
}
