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

#include "includes/ft_printf.h"

int main(void)
{

/*
	ft_printf("$ %stest%s $\n", RED, RESET);
	ft_printf("$ %stest%s $\n", GREEN, RESET);
	ft_printf("$ %stest%s $\n", YELLOW, RESET);
	ft_printf("$ %stest%s $\n", BLUE, RESET);
*/
	// Cleanup to norm
	// Check a test set with valgrind
	// move to vox repo
	// check again
	// set finished
	//ft_printf("%+4.1f\n", 42.0);
	// ft_printf("%i\n", 1);
/*	
	int real_return;
	int my_return;

	ft_putendl("\nInput: %5.o %5.0o");
	my_return = ft_printf("My ft_printf: %5.o %5.0o $\n", 0, 0);
	real_return = printf("Real  printf: %5.o %5.0o $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-8.o %#.0o");
	my_return = ft_printf("My ft_printf: %#5.o %#5.0o $\n", 0, 0);
	real_return = printf("Real  printf: %#5.o %#5.0o $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
		
*/

unsigned int a = 207;
	unsigned int b = 0;
	unsigned short h = 207;
	unsigned char hh = 'b';
	unsigned long l = 4294967295;
	unsigned long long ll = 18446744073709551615U;
	unsigned long long ll2 = 18446744073709551614U;
	int real_return;
	int my_return;
	unsigned int max = 4294967295;



	ft_putendl("\n\n * * * * * * * * * * UNSIGNED OCTAL - Conversion o:  * * * * * * * * * *\n");

	ft_putendl("Input: %o");
	my_return = ft_printf("My ft_printf: %o $\n", a);
	real_return = printf("Real  printf: %o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %08.5o");
	my_return = ft_printf("My ft_printf: %08.5o $\n", a);
	real_return = printf("Real  printf: %08.5o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.5o");
	my_return = ft_printf("My ft_printf: %.5o $\n", a);
	real_return = printf("Real  printf: %.5o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %05o");
	my_return = ft_printf("My ft_printf: %05o $\n", a);
	real_return = printf("Real  printf: %05o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %5.o");
	my_return = ft_printf("My ft_printf: %5.o $\n", a);
	real_return = printf("Real  printf: %5.o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ZERO INPUT
	ft_putendl("\n\n * * * * * Zero input:  * * * * *");

	ft_putendl("\nInput: %0o");
	my_return = ft_printf("My ft_printf: %0o $\n", 0);
	real_return = printf("Real  printf: %0o $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.8o");
	my_return = ft_printf("My ft_printf: %.8o $\n", 0);
	real_return = printf("Real  printf: %.8o $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// NEGATIVE INPUT
	ft_putendl("\n\n * * * * * Negative input: * * * * * (undefined behavior?)");

	ft_putendl("\nInput: %o");
	my_return = ft_printf("My ft_printf: %o $\n", -42);
	real_return = printf("Real  printf: %o $\n", -42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.8o");
	my_return = ft_printf("My ft_printf: %.8o $\n", -142);
	real_return = printf("Real  printf: %.8o $\n", -142);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// MAX UNSIGNED INT
	ft_putendl("\n\n * * * * * Max unsigned int:  * * * * *");

	ft_putendl("\nInput: %o");
	my_return = ft_printf("My ft_printf: %o $\n", max);
	real_return = printf("Real  printf: %o $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %8.4o");
	my_return = ft_printf("My ft_printf: %8.4o $\n", max);
	real_return = printf("Real  printf: %8.4o $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ADJUST LEFT
	ft_putendl("\n\n * * * * * Adjust left:  * * * * *");

	ft_putendl("\nInput: %-.8o");
	my_return = ft_printf("My ft_printf: %-.8o $\n", a);
	real_return = printf("Real  printf: %-.8o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-8o");
	my_return = ft_printf("My ft_printf: %-8o $\n", a);
	real_return = printf("Real  printf: %-8o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-o");
	my_return = ft_printf("My ft_printf: %-o $\n", a);
	real_return = printf("Real  printf: %-o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// HASH FLAG
	ft_putendl("\n\n * * * * * Hash flag:  * * * * *");

	ft_putendl("\nInput: %#o");
	my_return = ft_printf("My ft_printf: %#o $\n", a);
	real_return = printf("Real  printf: %#o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#8o");
	my_return = ft_printf("My ft_printf: %#8o $\n", 2500);
	real_return = printf("Real  printf: %#8o $\n", 2500);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#.8o");
	my_return = ft_printf("My ft_printf: %#.8o $\n", a);
	real_return = printf("Real  printf: %#.8o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.8o");
	my_return = ft_printf("My ft_printf: %#-12.8o $\n", a);
	real_return = printf("Real  printf: %#-12.8o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12o");
	my_return = ft_printf("My ft_printf: %#-12o $\n", a);
	real_return = printf("Real  printf: %#-12o $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// LENGTH MODIFIERS
	ft_putendl("\n\n * * * * * Hash flag with argument value zero:  * * * * *");

	ft_putendl("\nInput: %.o %.0o");
	my_return = ft_printf("My ft_printf: %.o %.0o $\n", 0, 0);
	real_return = printf("Real  printf: %.o %.0o $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %5.o %5.0o");
	my_return = ft_printf("My ft_printf: %5.o %5.0o $\n", 0, 0);
	real_return = printf("Real  printf: %5.o %5.0o $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#.o %#.0o");
	my_return = ft_printf("My ft_printf: %#.o %#.0o $\n", 0, 0);
	real_return = printf("Real  printf: %#.o %#.0o $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-8.o %#.0o");
	my_return = ft_printf("My ft_printf: %#-8.o %#.0o $\n", 0, 0);
	real_return = printf("Real  printf: %#-8.o %#.0o $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// LENGTH MODIFIERS
	ft_putendl("\n\n * * * * * Lengt modifiers:  * * * * *");

	ft_putendl("\nInput: %ho");
	my_return = ft_printf("My ft_printf: %ho $\n", h);
	real_return = printf("Real  printf: %ho $\n", h);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %hho");
	my_return = ft_printf("My ft_printf: %hho $\n", hh);
	real_return = printf("Real  printf: %hho $\n", hh);
	if(my_return != real_return)
	 	printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %lo");
	my_return = ft_printf("My ft_printf: %lo $\n", l);
	real_return = printf("Real  printf: %lo $\n", l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %llo");
	my_return = ft_printf("My ft_printf: %llo $\n", ll);
	real_return = printf("Real  printf: %llo $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %llo");
	my_return = ft_printf("My ft_printf: %llo $\n", ll2);
	real_return = printf("Real  printf: %llo $\n", ll2);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// RANDOM TESTS
	ft_putendl("\n\n * * * * * Random tests:  * * * * *");

	ft_putendl("\nInput: %-35.25llo");
	my_return = ft_printf("My ft_printf: %-35.25llo $\n", ll);
	real_return = printf("Real  printf: %-35.25llo $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %035.llo");
	my_return = ft_printf("My ft_printf: %035.llo $\n", ll);
	real_return = printf("Real  printf: %035.llo $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %o %ho %hho");
	my_return = ft_printf("My ft_printf: %o, %ho, %hho $\n", -42, -42, -42);
	real_return = printf("Real  printf: %o, %ho, %hho $\n", -42, -42, -42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#o");
	my_return = ft_printf("My ft_printf: %#o $\n", 0);
	real_return = printf("Real  printf: %#o $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// Testing with multiple arguments
	ft_putendl("\n\n * * * * * Testing with multiple arguments:  * * * * *");

	ft_putendl("\nInput: %35o, %#o and %llo");
	my_return = ft_printf("My ft_printf: %35o, %#o and %llo $\n", b, a, ll);
	real_return = printf("Real  printf: %35o, %#o and %llo $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.35o, %#o and %llo");
	my_return = ft_printf("My ft_printf: %.35o, %#o and %llo $\n", b, a, ll);
	real_return = printf("Real  printf: %.35o, %#o and %llo $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

}
