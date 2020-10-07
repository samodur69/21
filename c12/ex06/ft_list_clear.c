/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 21:06:36 by vmutteri          #+#    #+#             */
/*   Updated: 2020/10/01 21:57:49 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*next;

	current = begin_list;
	if (!begin_list)
		return ;
	while (current != NULL)
	{
		next = current->next;
		free_fct(current);
		free(current);
		current = next;
	}
	free_fct(begin_list);
	begin_list = NULL;
}
