/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 20:38:50 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/22 22:05:28 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int nb;
	int znak;

	znak = 1;
	nb = 0;
	while (*str)
	{
		if ((*str >= '0' && *str <= '9'))
		{
			while (*str >= '0' && *str <= '9')
			{
				nb = (nb * 10) + (*str - '0');
				str++;
			}
			return (znak * nb);
		}
		else if (*str == '-')
			znak *= (-1);
		str++;
	}
	return (0);
}
