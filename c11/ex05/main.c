/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 23:27:11 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/30 23:27:18 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int		main(int argc, char **argv)
{
	int a;
	int b;
	int (*operator)(int, int);

	if (argc != 4)
		return (1);
	operator = ft_check_operator(argv[2]);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_check_div(b, operator) == 1)
		ft_putnbr(operator(a, b));
	ft_putchar('\n');
	return (0);
}

void	*ft_check_operator(char *str)
{
	if (!(*str))
		return (0);
	if (*str == '+')
		return (ft_plus);
	else if (*str == '-')
		return (ft_minus);
	else if (*str == '/')
		return (ft_div);
	else if (*str == '%')
		return (ft_modulo);
	else if (*str == '*')
		return (ft_multiply);
	else
		return (0);
}
