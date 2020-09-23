/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:07:31 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/20 17:17:37 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int id;
	int is;

	id = 0;
	is = 0;
	while (dest[id] != '\0')
		id++;
	while (src[is] != '\0')
	{
		dest[id] = src[is];
		is++;
		id++;
	}
	dest[id] = '\0';
	return (dest);
}
