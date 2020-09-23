/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:02:38 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/20 17:41:49 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int id;
	unsigned int is;

	id = 0;
	is = 0;
	while (dest[id] != '\0')
		id++;
	while (src[is] != '\0' && is < nb)
	{
		dest[id] = src[is];
		is++;
		id++;
	}
	dest[id] = '\0';
	return (dest);
}
