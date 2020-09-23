/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:21:25 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/20 19:44:01 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"

int	main(void)
{
	char ex001[] = "aaaer";
	char ex002[] = "aasdgfsgsaaa";
	int result;

	char dest[200] = "first";
	char dest1[] = "first";
	char dest2[200] = "first";
	char dest3[] = "first";
	char src[] = "second";
	
	char str_ex04[] = "aaaa555aaaa";
	char to_find[] = "555";
	char *position;

/* EX00 - EX01  */
	result = ft_strcmp(ex001, ex002);
	printf("ex00 Result = %d \n", result);	
	result = ft_strncmp(ex001, ex002, 8);
	printf("ex01 Result = %d \n", result);
	result = strncmp(ex001, ex002, 8);
	printf("ex01 origin func = %d \n", result);
/*   Ex02   */
	strcat(dest, src);
	printf("ex02 origin func string: \n %s \n", dest);
	ft_strcat(dest1, src);	
	printf("ex02 My func result: \n %s \n", dest1);
/*  EX03   */	
	strncat(dest2, src, 3);
	printf("ex03 origin func string: \n %s \n", dest2);
	ft_strncat(dest3, src, 3);
	printf("ex03 MY func string: \n %s \n", dest3);
/*  EX04   */
	position = strstr(str_ex04, to_find);
	if (!(position))
		printf("dont match anything");
	else
		printf("ex04 origin func result \nStart position is %s \n", position);
//	position = ft_strstr(str_ex04, to_find);	
	if (!(position))
		printf("dont match anything");
	else
		printf("ex04 MY func result \nStart position is %s \n", position);
}
