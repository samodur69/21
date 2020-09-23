/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:58:06 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/22 11:18:56 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"

int	main(void)
{
	char str_ex00[] = "abcdefelvjevgoijeroijcmmcz...1213fg";
	int len_ex00 =0;
	char str_ex01[] = "abcdsdfjhdsfsdvfnn...wre3132///ds/@#$131398dasnckjnce";
	int nb;
	char atoi_str[] = "w---  	\n  --12114ab-567";
//	char atoi_str[] = "sad1234rrr555";

	/* EX00 */
	len_ex00 = strlen(str_ex00);
	printf("ex00 origin func result:\n");
	printf(" len = %d \n", len_ex00);
	printf("ex00 MY func result:\n");
	len_ex00 = ft_strlen(str_ex00); 
	printf(" len = %d \n", len_ex00);
	/* EX01 */
	printf("string from ex01 : \n");	
	ft_putstr(str_ex01);
	/* EX02 */	
	printf("my lovely number from ex02 : \n");	
	nb = -2147483648;
	ft_putnbr(nb);
	/* EX03 */
	nb = atoi(atoi_str);
	printf("\nOriginal  atoi number = %d \n", nb);
	nb = ft_atoi(atoi_str);
	printf("\nMy  atoi number = %d \n", nb);
}
