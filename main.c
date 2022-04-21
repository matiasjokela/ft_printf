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
int		real_return;
	int		my_return;
	char	*a1 = "Hello";

	ft_putendl("\n\n * * * * * * * * * * VOID POINTER - conversion p:  * * * * * * * * * *\n");

	ft_putendl("nInput: %p ");
	my_return = ft_printf("My ft_printf: %p $\n", &a1);
	real_return = printf("Real  printf: %p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %35p ");
	my_return = ft_printf("My ft_printf: %35p $\n", &a1);
	real_return = printf("Real  printf: %35p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-35p ");
	my_return = ft_printf("My ft_printf: %-35p $\n", &a1);
	real_return = printf("Real  printf: %-35p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#35p ");
	my_return = ft_printf("My ft_printf: %#35p $\n", &a1);
	real_return = printf("Real  printf: %#35p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+35p ");
	my_return = ft_printf("My ft_printf: %+35p $\n", &a1);
	real_return = printf("Real  printf: %+35p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 35p ");
	my_return = ft_printf("My ft_printf: % 35p $\n", &a1);
	real_return = printf("Real  printf: % 35p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %42.32p ");
	my_return = ft_printf("My ft_printf: %42.32p $\n", &a1);
	real_return = printf("Real  printf: %42.32p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.36p ");
	my_return = ft_printf("My ft_printf: %.36p $\n", &a1);
	real_return = printf("Real  printf: %.36p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.0p, %.p");
	my_return = ft_printf("My ft_printf: %.0p, %.p $\n", 0, 0);
	real_return = printf("Real  printf: %.0p, %.p $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

}
