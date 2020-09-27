/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmutteri <vmutteri@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 23:25:42 by vmutteri          #+#    #+#             */
/*   Updated: 2020/09/23 23:39:28 by vmutteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
//#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int	main(void)
{
	
	
	/* Ex00 - ex01 */
	int nb_fact = 12; // max factorial in int 479001600
	int res_fact;

	res_fact = ft_iterative_factorial(nb_fact);
	printf(" %d  result of iterative factorial \n \n", res_fact);
	res_fact = ft_recursive_factorial(nb_fact);
	printf(" %d  result of recurcive factorial \n \n", res_fact);
	
	/* ex02 - ex03 */
	int nb = 31; //31 can
	int power = 6;
	int result;

	result = ft_iterative_power(nb, power);
	printf(" %d  result of iterative powering \n \n", result);
	result = ft_recursive_power(nb, power);
	printf(" %d  result of recursive powering\n \n", result);


	/* ex04 */
	int fib_index = 20; // 4181
	int fib_res;

	fib_res = ft_fibonacci(fib_index);
	printf(" %d  fibonacci number with  %d  index  \n \n", fib_res, fib_index);

	/* ex05 */
	int sqrt_numb = 121; 
	int sqrt_res;

	sqrt_res = ft_sqrt(sqrt_numb);
	printf(" %d  is sqrt of      %d   number\n \n", sqrt_res, sqrt_numb);

	/* ex06 */
	int prime_numb = 173;
	int not_prime_number = 2146742353; //next prime 179
	int next_prime;
	int prime_res;

//	prime_res = ft_is_prime(prime_numb);
//	printf(" %d     is prime   if next number is 1  :    %d  \n \n", prime_numb, prime_res);

	next_prime = ft_find_next_prime(not_prime_number);
	printf(" %d     is next  prime  number after    %d  \n \n", next_prime, not_prime_number);
	






	




}
