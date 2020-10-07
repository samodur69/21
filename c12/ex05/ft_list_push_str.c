/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 20:25:47 by vmutteri          #+#    #+#             */
/*   Updated: 2020/10/01 21:03:07 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_str(int size, char **strs)
{
	t_list	*current;
	t_list	*begin_list;

	size = size - 1;
	while (*strs || size > 0)
	{
		if (begin_list)
		{
			current = ft_create_elem(strs[size]);
			current->next = begin_list;
			begin_list = current;
		}
		else
			begin_list = ft_create_elem(strs[size]);
		size--;
	}
	return (begin_list);
}
