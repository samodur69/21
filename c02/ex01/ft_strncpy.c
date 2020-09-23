/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:41:17 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/19 17:06:59 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
