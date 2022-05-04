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

	//wildcards
	//colors
	//print bits
	//print to file


	//speed optimisation

int real_return;
	int my_return = 0;


	ft_putendl("\n\n * * * * * * * * * * Asterix (*): * * * * * * * * * *\n");

	ft_putendl("Input: %*d");
	my_return = ft_printf("My ft_printf: %*d $\n", 12, 42);
	real_return = printf("Real  printf: %*d $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*d");
	my_return = ft_printf("My ft_printf: %*.8d $\n", 12, 42);
	real_return = printf("Real  printf: %*.8d $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*d");
	my_return = ft_printf("My ft_printf: %*.18u $\n", 12, 42);
	real_return = printf("Real  printf: %*.18u $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*d");
	my_return = ft_printf("My ft_printf: % *d $\n", 12, 42);
	real_return = printf("Real  printf: % *d $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*d");
	my_return = ft_printf("My ft_printf: %+*o $\n", 12, 42);
	real_return = printf("Real  printf: %+*o $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*d");
	my_return = ft_printf("My ft_printf: %-*i $\n", 12, 42);
	real_return = printf("Real  printf: %-*i $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*x");
	my_return = ft_printf("My ft_printf: %*x $\n", 12, 42);
	real_return = printf("Real  printf: %*x $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*x");
	my_return = ft_printf("My ft_printf: %*x $\n", 12, 42);
	real_return = printf("Real  printf: %*x $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*s");
	my_return = ft_printf("My ft_printf: %*x $\n", 12, 42);
	real_return = printf("Real  printf: %*x $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*c");
	my_return = ft_printf("My ft_printf: %*x $\n", 12, 42);
	real_return = printf("Real  printf: %*x $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*s");
	my_return = ft_printf("My ft_printf: %.*s $\n", 3, "Hello");
	real_return = printf("Real  printf: %.*s $\n", 3, "Hello");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*d");
	my_return = ft_printf("My ft_printf: %.*d $\n", -1, 0);
	real_return = printf("Real  printf: %.*d $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*u");
	my_return = ft_printf("My ft_printf: %.*u $\n", -1, 0);
	real_return = printf("Real  printf: %.*u $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*o");
	my_return = ft_printf("My ft_printf: %.*o $\n", -1, 0);
	real_return = printf("Real  printf: %.*o $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*x");
	my_return = ft_printf("My ft_printf: %.*x $\n", -1, 0);
	real_return = printf("Real  printf: %.*x $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*X");
	my_return = ft_printf("My ft_printf: %.*X $\n", -1, 0);
	real_return = printf("Real  printf: %.*X $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*s");
	my_return = ft_printf("My ft_printf: %.*s $\n", -1, 0);
	real_return = printf("Real  printf: %.*s $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*3d");
	my_return = ft_printf("My ft_printf: %*3d $\n", 5, 0);
	real_return = printf("Real  printf: %*3d $\n", 5, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %05.*d");
	my_return = ft_printf("My ft_printf: %05.*d $\n", -15, 42);
	real_return = printf("Real  printf: %05.*d $\n", -15, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

}
