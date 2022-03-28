/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:57:02 by mjokela           #+#    #+#             */
/*   Updated: 2022/03/20 14:57:11 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	//float j = -0.015;
	//char d = 'h';


	printf("return: %d\n", ft_printf("%015.15i\n", -207));
	printf("return: %d\n", printf("%015.15i\n", -207));

	//printf("%8.10d\n", 50);
	//printf("%.10f\n\n", 1 / 23.0);

/*PYRYN TESTIT*/
/*
	int a = 207;
	int b = -207;
	short h = 207;
	signed char hh = 'b';
	long l = 2147483647;					//max long, same as max int
	long long ll = 9223372036854775807; 	//max long long
	int real_return;
	int my_return;
	int max = 2147483647;

	ft_putendl(" * * * * * * * * * * SIGNED DESIMAL - Conversion di:  * * * * * * * * * *\n");

	ft_putendl("Input: %d");
	my_return = ft_printf("My ft_printf: %d $\n", a);
	real_return = printf("Real  printf: %d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+8.3d");
	my_return = ft_printf("My ft_printf: %+8.3d $\n", a);
	real_return = printf("Real  printf: %+8.3d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 8.3d");
	my_return = ft_printf("My ft_printf: % 8.3d $\n", a);
	real_return = printf("Real  printf: % 8.3d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %08.5d");
	my_return = ft_printf("My ft_printf: %08.5d $\n", a);
	real_return = printf("Real  printf: %08.5d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+08.5d");
	my_return = ft_printf("My ft_printf: %+08.5d $\n", a);
	real_return = printf("Real  printf: %+08.5d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 08.5d");
	my_return = ft_printf("My ft_printf: % 08.5d $\n", a);
	real_return = printf("Real  printf: % 08.5d $\n", a);
		if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.5d");
	my_return = ft_printf("My ft_printf: %.5d $\n", a);
	real_return = printf("Real  printf: %.5d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %05d");
	my_return = ft_printf("My ft_printf: %05d $\n", a);
	real_return = printf("Real  printf: %05d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % d");
	my_return = ft_printf("My ft_printf: % d $\n", a);
	real_return = printf("Real  printf: % d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %5.d");
	my_return = ft_printf("My ft_printf: %5.d $\n", a);
	real_return = printf("Real  printf: %5.d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ZERO INPUT
	ft_putendl("\n\n * * * * * Zero input:  * * * * *");

	ft_putendl("\nInput: %+0d");
	my_return = ft_printf("My ft_printf: %+0d $\n", 0);
	real_return = printf("Real  printf: %+0d $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 0d");
	my_return = ft_printf("My ft_printf: % 0d $\n", 0);
	real_return = printf("Real  printf: % 0d $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % .8d");
	my_return = ft_printf("My ft_printf: % .8d $\n", 0);
	real_return = printf("Real  printf: % .8d $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// NEGATIVE INPUT
	ft_putendl("\n\n * * * * * Negative input:  * * * * *");

	ft_putendl("\nInput: %d");
	my_return = ft_printf("My ft_printf: %d $\n", b);
	real_return = printf("Real  printf: %d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.8d");
	my_return = ft_printf("My ft_printf: %.8d $\n", b);
	real_return = printf("Real  printf: %.8d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+8.3d");
	my_return = ft_printf("My ft_printf: %+8.3d $\n", b);
	real_return = printf("Real  printf: %+8.3d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 8.3d");
	my_return = ft_printf("My ft_printf: % 8.3d $\n", b);
	real_return = printf("Real  printf: % 8.3d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %08.5d");
	my_return = ft_printf("My ft_printf: %08.5d $\n", b);
	real_return = printf("Real  printf: %08.5d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+08.5d");
	my_return = ft_printf("My ft_printf: %+08.5d $\n", b);
	real_return = printf("Real  printf: %+08.5d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 08.5d");
	my_return = ft_printf("My ft_printf: % 08.5d $\n", b);
	real_return = printf("Real  printf: % 08.5d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % d");
	my_return = ft_printf("My ft_printf: % d $\n", b);
	real_return = printf("Real  printf: % d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// MAX INT
	ft_putendl("\n\n * * * * * Max int:  * * * * *");

	ft_putendl("\nInput: %d");
	my_return = ft_printf("My ft_printf: %d $\n", max);
	real_return = printf("Real  printf: %d $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 8.4d");
	my_return = ft_printf("My ft_printf: % 8.4d $\n", max);
	real_return = printf("Real  printf: % 8.4d $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ADJUST LEFT
	ft_putendl("\n\n * * * * * Adjust left:  * * * * *");

	ft_putendl("\nInput: %-.8d");
	my_return = ft_printf("My ft_printf: %-.8d $\n", a);
	real_return = printf("Real  printf: %-.8d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-8d");
	my_return = ft_printf("My ft_printf: %-8d $\n", a);
	real_return = printf("Real  printf: %-8d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %- 8d");
	my_return = ft_printf("My ft_printf: %- 8d $\n", b);
	real_return = printf("Real  printf: %- 8d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %- d");
	my_return = ft_printf("My ft_printf: %- d $\n", a);
	real_return = printf("Real  printf: %- d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %- d");
	my_return = ft_printf("My ft_printf: %- d $\n", 0);
	real_return = printf("Real  printf: %- d $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// LENGTH MODIFIERS
	ft_putendl("\n\n * * * * * Lengt modifiers:  * * * * *");

	ft_putendl("\nInput: %hd");
	my_return = ft_printf("My ft_printf: %hd $\n", h);
	real_return = printf("Real  printf: %hd $\n", h);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %hhd");
	my_return = ft_printf("My ft_printf: %hhd $\n", hh);
	real_return = printf("Real  printf: %hhd $\n", hh);
	if(my_return != real_return)
	 	printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %ld");
	my_return = ft_printf("My ft_printf: %ld $\n", l);
	real_return = printf("Real  printf: %ld $\n", l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %lld");
	my_return = ft_printf("My ft_printf: %lld $\n", ll);
	real_return = printf("Real  printf: %lld $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// RANDOM TESTS
	ft_putendl("\n\n * * * * * Random tests:  * * * * *");

	ft_putendl("\nInput: %-+35.25lld");
	my_return = ft_printf("My ft_printf: %-+35.25lld $\n", ll);
	real_return = printf("Real  printf: %-+35.25lld $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+35.lld");
	my_return = ft_printf("My ft_printf: %0+35.lld $\n", ll);
	real_return = printf("Real  printf: %0+35.lld $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+35.lld");
	my_return = ft_printf("My ft_printf: %0+35.lld $\n", -ll);
	real_return = printf("Real  printf: %0+35.lld $\n", -ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// Testing with multiple arguments
	ft_putendl("\n\n * * * * * Testing with multiple arguments:  * * * * *");

	ft_putendl("\nInput: %35d, %+d and %lld");
	my_return = ft_printf("My ft_printf: %35d, %+d and %lld $\n", b, a, ll);
	real_return = printf("Real  printf: %35d, %+d and %lld $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.35d, % d and %lld");
	my_return = ft_printf("My ft_printf: %.35d, % d and %lld $\n", b, a, ll);
	real_return = printf("Real  printf: %.35d, % d and %lld $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ERROR TEST
	ft_putendl("\n\n * * * * * Error test:  * * * * *");

	ft_putendl("\nInput: %-0d");
	ft_printf("My ft_printf: %-0d $\n", a);
	//printf("Real  printf: %-0d $\n", 0);
	*/

}
