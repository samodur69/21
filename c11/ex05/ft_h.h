/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:36:52 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/30 23:20:49 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_div(int a, int b);
int		ft_plus(int a, int b);
int		ft_minus(int a, int b);
int		ft_multiply(int a, int b);
int		ft_modulo(int a, int b);
int		ft_check_div(int b, int (*f)(int, int));
void	*ft_check_operator(char *str);
#endif
