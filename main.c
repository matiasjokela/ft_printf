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

	ft_printf("{%#.5x}\n", 1);
	ft_printf("{%#2.x}\n", 5);
	//ft_printf("%#.1u\n", 5);






}
