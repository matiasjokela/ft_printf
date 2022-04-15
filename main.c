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
int real_return;
	int my_return;


	ft_putendl("\n\n * * * * * * * * * * CHAR (int converted to unsigned char) - Conversion c:  * * * * * * * * * *\n");

	ft_putendl("Input: %c");
	my_return = ft_printf("My ft_printf: %c $\n", 72);
	real_return = printf("Real  printf: %c $\n", 72);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %8c");
	my_return = ft_printf("My ft_printf: %8c $\n", 73);
	real_return = printf("Real  printf: %8c $\n", 73);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-8c");
	my_return = ft_printf("My ft_printf: %-8c $\n", 86);
	real_return = printf("Real  printf: %-8c $\n", 86);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-c");
	my_return = ft_printf("My ft_printf: %-c $\n", 69);
	real_return = printf("Real  printf: %-c $\n", 69);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %c");
	my_return = ft_printf("My ft_printf: %c $\n", 127);
	real_return = printf("Real  printf: %c $\n", 127);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %c");
	my_return = ft_printf("My ft_printf: %c $\n", 128);
	real_return = printf("Real  printf: %c $\n", 128);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %c");
	my_return = ft_printf("My ft_printf: %c $\n", -1);
	real_return = printf("Real  printf: %c $\n", -1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %05c");
	my_return = ft_printf("My ft_printf: %05c $\n", 77);
	real_return = printf("Real  printf: %05c $\n", 77);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.5c");
	my_return = ft_printf("My ft_printf: %0.5c $\n", 77);
	real_return = printf("Real  printf: %0.5c $\n", 77);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);	



}
