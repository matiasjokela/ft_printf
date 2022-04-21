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

unsigned int a = 846204;
	unsigned int b = 664;
	unsigned short h = 207;
	unsigned char hh = 'b';
	unsigned long l = 4294967295;
	unsigned long long ll = 18446744073709551615U;
	unsigned long long ll2 = 18446744073709551614U;
 	int real_return;
 	int my_return;
	unsigned int max = 4294967295;

	ft_putendl("\n\n * * * * * * * * * * UNSIGNED HEXADECIMAL - Conversion x and X:  * * * * * * * * * *\n");

	ft_putendl("Input: %x");
	my_return = ft_printf("My ft_printf: %x $\n", a);
	real_return = printf("Real  printf: %x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %012.9x");
	my_return = ft_printf("My ft_printf: %012.9x $\n", a);
	real_return = printf("Real  printf: %012.9x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.9x");
	my_return = ft_printf("My ft_printf: %.9x $\n", a);
	real_return = printf("Real  printf: %.9x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %09x");
	my_return = ft_printf("My ft_printf: %09x $\n", a);
	real_return = printf("Real  printf: %09x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %9.x");
	my_return = ft_printf("My ft_printf: %9.x $\n", a);
	real_return = printf("Real  printf: %9.x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %X");
	my_return = ft_printf("My ft_printf: %X $\n", a);
	real_return = printf("Real  printf: %X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %012.9X");
	my_return = ft_printf("My ft_printf: %012.9X $\n", a);
	real_return = printf("Real  printf: %012.9X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.9X");
	my_return = ft_printf("My ft_printf: %.9X $\n", a);
	real_return = printf("Real  printf: %.9X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %09X");
	my_return = ft_printf("My ft_printf: %09X $\n", a);
	real_return = printf("Real  printf: %09X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %9.X");
	my_return = ft_printf("My ft_printf: %9.X $\n", a);
	real_return = printf("Real  printf: %9.X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %9X");
	my_return = ft_printf("My ft_printf: %9X $\n", a);
	real_return = printf("Real  printf: %9X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ZERO INPUT
	ft_putendl("\n\n * * * * * Zero input:  * * * * *");

	ft_putendl("\nInput: %0x");
	my_return = ft_printf("My ft_printf: %0x $\n", 0);
	real_return = printf("Real  printf: %0x $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.8X");
	my_return = ft_printf("My ft_printf: %.8X $\n", 0);
	real_return = printf("Real  printf: %.8X $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#x");
	my_return = ft_printf("My ft_printf: %#x $\n", 0);
	real_return = printf("Real  printf: %#x $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// NEGATIVE INPUT
	ft_putendl("\n\n * * * * * Negative input: * * * * * (undefined behavior?)");

	ft_putendl("\nInput: %X");
	my_return = ft_printf("My ft_printf: %X $\n", -42);
	real_return = printf("Real  printf: %X $\n", -42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.8x");
	my_return = ft_printf("My ft_printf: %.8x $\n", -142);
	real_return = printf("Real  printf: %.8x $\n", -142);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// MAX UNSIGNED INT
	ft_putendl("\n\n * * * * * Max unsigned int:  * * * * *");

	ft_putendl("\nInput: %X");
	my_return = ft_printf("My ft_printf: %X $\n", max);
	real_return = printf("Real  printf: %X $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %8.4x");
	my_return = ft_printf("My ft_printf: %8.4x $\n", max);
	real_return = printf("Real  printf: %8.4x $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ADJUST LEFT
	ft_putendl("\n\n * * * * * Adjust left:  * * * * *");

	ft_putendl("\nInput: %-.8x");
	my_return = ft_printf("My ft_printf: %-.8x $\n", a);
	real_return = printf("Real  printf: %-.8x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-8x");
	my_return = ft_printf("My ft_printf: %-8x $\n", a);
	real_return = printf("Real  printf: %-8x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-X");
	my_return = ft_printf("My ft_printf: %-X $\n", a);
	real_return = printf("Real  printf: %-X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// HASH FLAG
	ft_putendl("\n\n * * * * * Hash flag:  * * * * *");

	ft_putendl("\nInput: %#x");
	my_return = ft_printf("My ft_printf: %#x $\n", a);
	real_return = printf("Real  printf: %#x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

		ft_putendl("\nInput: %#08x");
	my_return = ft_printf("My ft_printf: %#08x $\n", 42);
	real_return = printf("Real  printf: %#08x $\n", 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);


	ft_putendl("\nInput: %#.8x");
	my_return = ft_printf("My ft_printf: %#.8x $\n", a);
	real_return = printf("Real  printf: %#.8x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.8X");
	my_return = ft_printf("My ft_printf: %#-12.8X $\n", a);
	real_return = printf("Real  printf: %#-12.8X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12X");
	my_return = ft_printf("My ft_printf: %#-12X $\n", a);
	real_return = printf("Real  printf: %#-12X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#12x");
	my_return = ft_printf("My ft_printf: %#12x $\n", a);
	real_return = printf("Real  printf: %#12x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// LENGTH MODIFIERS
	ft_putendl("\n\n * * * * * Lengt modifiers:  * * * * *");

	ft_putendl("\nInput: %hx");
	my_return = ft_printf("My ft_printf: %hx $\n", h);
	real_return = printf("Real  printf: %hx $\n", h);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %hhx");
	my_return = ft_printf("My ft_printf: %hhx $\n", hh);
	real_return = printf("Real  printf: %hhx $\n", hh);
	if(my_return != real_return)
	 	printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %lx");
	my_return = ft_printf("My ft_printf: %lx $\n", l);
	real_return = printf("Real  printf: %lx $\n", l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %llX");
	my_return = ft_printf("My ft_printf: %llX $\n", ll);
	real_return = printf("Real  printf: %llX $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %llX");
	my_return = ft_printf("My ft_printf: %llX $\n", ll2);
	real_return = printf("Real  printf: %llX $\n", ll2);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// RANDOM TESTS
	ft_putendl("\n\n * * * * * Random tests:  * * * * *");

	ft_putendl("\nInput: %-35.25llx");
	my_return = ft_printf("My ft_printf: %-35.25llx $\n", ll);
	real_return = printf("Real  printf: %-35.25llx $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %035.llX");
	my_return = ft_printf("My ft_printf: %035.llX $\n", ll);
	real_return = printf("Real  printf: %035.llX $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ZERO PRECISION AND ZERO ARGUMENT
	ft_putendl("\n\n * * * * * Precision zero and argument value zero:  * * * * *");

	ft_putendl("\nInput: %#.x %#.0x");
	my_return = ft_printf("My ft_printf: %#.x %#.0x $\n", 0, 0);
	real_return = printf("Real  printf: %#.x %#.0x $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.x %.0x");
	my_return = ft_printf("My ft_printf: %.x %.0x $\n", 0, 0);
	real_return = printf("Real  printf: %.x %.0x $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: \n%5.x %5.0x");
	my_return = ft_printf("My ft_printf: %5.x %5.0x $\n", 0, 0);
	real_return = printf("Real  printf: %5.x %5.0x $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// Testing with multiple arguments
	ft_putendl("\n\n * * * * * Testing with multiple arguments:  * * * * *");

	ft_putendl("\nInput: %35x, %#x and %llX");
	my_return = ft_printf("My ft_printf: %35x, %#x and %llX $\n", b, a, ll);
	real_return = printf("Real  printf: %35x, %#x and %llX $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.35X, %#X and %llx");
	my_return = ft_printf("My ft_printf: %.35X, %#X and %llx $\n", b, a, ll);
	real_return = printf("Real  printf: %.35X, %#X and %llx $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: numbers 10 to 16");
	my_return = ft_printf("My ft_printf: %x, %x, %x, %x, %x, %x, %X, %X, %X, %X, %X, %X, $\n", 10, 11, 12, 13, 14, 15, 10, 11, 12, 13, 14, 15);
	real_return = printf("Real  printf: %x, %x, %x, %x, %x, %x, %X, %X, %X, %X, %X, %X, $\n", 10, 11, 12, 13, 14, 15, 10, 11, 12, 13, 14, 15);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);




	//int real_return;
	//int my_return = 0;


/*

	my_return = ft_printf("My ft_printf: %#.0f $\n", 4.71);
	real_return = printf("Real  printf: %#.0f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);


	printf("\n");
	my_return = ft_printf("My ft_printf:  %.35Lf $\n", 42.123456789012345678901234567890l);
	real_return = printf("Real  printf:  %.35Lf $\n",  42.123456789012345678901234567890l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

*/



	//**********//
/*

	ft_putendl("\n\n * * * * * * * * * * DOUBLE - conversion fF:  * * * * * * * * * *\n");

	ft_putendl("\nInput: %.6f");
	my_return = ft_printf("My ft_printf: %.6f $\n", 4.71);
	real_return = printf("Real  printf: %.6f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.2f");
	my_return = ft_printf("My ft_printf: %.2f $\n", 4.666666);
	real_return = printf("Real  printf: %.2f $\n", 4.666666);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// FLAGS
	ft_putendl("\n\n * * * * * Flags:  * * * * *");

	ft_putendl("\nInput: % .3f");
	my_return = ft_printf("My ft_printf: % .3f $\n", 4.712345);
	real_return = printf("Real  printf: % .3f $\n", 4.712345);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+.6f");
	my_return = ft_printf("My ft_printf: %+.6f $\n", 4.712345);
	real_return = printf("Real  printf: %+.6f $\n", 4.712345);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+25.6f");
	my_return = ft_printf("My ft_printf: %0+25.6f $\n", 4.71);
	real_return = printf("Real  printf: %0+25.6f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-+25.6f");
	my_return = ft_printf("My ft_printf: %-+25.6f $\n", 4.71);
	real_return = printf("Real  printf: %-+25.6f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-0+25.6f");
	my_return = ft_printf("My ft_printf: %-0+25.6f $\n", 4.71);
	real_return = printf("Real  printf: %-0+25.6f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#.0f");
	my_return = ft_printf("My ft_printf: %#.0f $\n", 4.71);
	real_return = printf("Real  printf: %#.0f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.0f");
	my_return = ft_printf("My ft_printf:  %#-12.0f $\n", 4.71);
	real_return = printf("Real  printf:  %#-12.0f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// NEGATIVE
	ft_putendl("\n\n * * * * * Negative:  * * * * *");

	ft_putendl("\nInput: % .3f");
	my_return = ft_printf("My ft_printf: % .3f $\n", -4.712345);
	real_return = printf("Real  printf: % .3f $\n", -4.712345);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+.6f");
	my_return = ft_printf("My ft_printf: %+.6f $\n", -4.712345);
	real_return = printf("Real  printf: %+.6f $\n", -4.712345);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+25.6f");
	my_return = ft_printf("My ft_printf: %0+25.6f $\n", -4.71);
	real_return = printf("Real  printf: %0+25.6f $\n", -4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-+25.6f");
	my_return = ft_printf("My ft_printf: %-+25.6f $\n", -4.71);
	real_return = printf("Real  printf: %-+25.6f $\n", -4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-0+25.6f");
	my_return = ft_printf("My ft_printf: %-0+25.6f $\n", -4.71);
	real_return = printf("Real  printf: %-0+25.6f $\n", -4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.0f");
	my_return = ft_printf("My ft_printf:  %#-12.0f $\n", -4.71);
	real_return = printf("Real  printf:  %#-12.0f $\n", -4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ZERO INPUT
	ft_putendl("\n\n * * * * * Zero input:  * * * * *");

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf: %f $\n", 0.0);
	real_return = printf("Real  printf: %f $\n", 0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+25.6f");
	my_return = ft_printf("My ft_printf: %0+25.6f $\n", 0.0);
	real_return = printf("Real  printf: %0+25.6f $\n", 0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-+25.6f");
	my_return = ft_printf("My ft_printf: %-+25.6f $\n", 0.0);
	real_return = printf("Real  printf: %-+25.6f $\n", 0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-0+25.6f");
	my_return = ft_printf("My ft_printf: %-0+25.6f $\n", 0.0);
	real_return = printf("Real  printf: %-0+25.6f $\n", 0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.0f");
	my_return = ft_printf("My ft_printf:  %#-12.0f $\n", 0.0);
	real_return = printf("Real  printf:  %#-12.0f $\n", 0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.0f");
	my_return = ft_printf("My ft_printf:  %#-12.0f $\n", -0.0);
	real_return = printf("Real  printf:  %#-12.0f $\n", -0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", -0.0);
	real_return = printf("Real  printf:  %f $\n", -0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ROUNDING
	ft_putendl("\n\n * * * * * Rounding:  * * * * *");

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 0.1);
	real_return = printf("Real  printf:  %f $\n", 0.1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 0.01);
	real_return = printf("Real  printf:  %f $\n", 0.01);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.3f");
	my_return = ft_printf("My ft_printf:  %.3f $\n", 0.0025);
	real_return = printf("Real  printf:  %.3f $\n", 0.0025);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.3f");
	my_return = ft_printf("My ft_printf:  %.3f $\n", 0.0035);
	real_return = printf("Real  printf:  %.3f $\n", 0.0035);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.3f");
	my_return = ft_printf("My ft_printf:  %.3f $\n", 2.0035);
	real_return = printf("Real  printf:  %.3f $\n", 2.0035);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 0.5);
	real_return = printf("Real  printf:  %f $\n", 0.5);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 1.5);
	real_return = printf("Real  printf:  %f $\n", 1.5);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 2.5000000);
	real_return = printf("Real  printf:  %f $\n", 2.5000000);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 9.99999305);
	real_return = printf("Real  printf:  %f $\n", 9.99999305);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 9.9999985);
	real_return = printf("Real  printf:  %f $\n", 9.9999985);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 1444565444646.6465424242242);
	real_return = printf("Real  printf:  %f $\n",  1444565444646.6465424242242);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 2.55555450);
	real_return = printf("Real  printf:  %f $\n",  2.55555450);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 9.9999995);
	real_return = printf("Real  printf:  %f $\n", 9.9999995);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.0f");
	my_return = ft_printf("My ft_printf:  %.0f $\n", 0.5);
	real_return = printf("Real  printf:  %.0f $\n", 0.5);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ROUNDING WITH LONG DOUBLE
	ft_putendl("\n\n * * * * * Rounding with long double:  * * * * *");

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 9.9999995l);
	real_return = printf("Real  printf:  %Lf $\n", 9.9999995l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 1444565444646.6465424242242l);
	real_return = printf("Real  printf:  %Lf $\n",  1444565444646.6465424242242l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 1444565444646.6465424000l);
	real_return = printf("Real  printf:  %Lf $\n",  1444565444646.6465424000l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", -1444565444646.6465424242242454654l);
	real_return = printf("Real  printf:  %Lf $\n",  -1444565444646.6465424242242454654l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 9.999994500045678l);
	real_return = printf("Real  printf:  %Lf $\n",  9.999994500045678l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 2.5555545l);
	real_return = printf("Real  printf:  %Lf $\n",  2.5555545l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.0Lf");
	my_return = ft_printf("My ft_printf:  %.0Lf $\n", -0.5l);
	real_return = printf("Real  printf:  %.0Lf $\n", -0.5l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 18446744073709551615.42l);
	real_return = printf("Real  printf:  %Lf $\n",  18446744073709551615.42l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);


	ft_putendl("\nInput: %.35Lf");
	my_return = ft_printf("My ft_printf:  %.35Lf $\n", 42.123456789012345678901234567890l);
	real_return = printf("Real  printf:  %.35Lf $\n",  42.123456789012345678901234567890l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	
	
*/


}
