/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:31:07 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/30 21:32:56 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f) (char*))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}