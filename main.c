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
#include <stdio.h>
#include <string.h>

int main(void)
{




	int		ret;

	printf("---------------------------\n");
	ft_printf("Basic tests for %%c\n");
	ft_printf("---------------------------\n");

	ret = ft_printf("print null character '%c'\n", '\0');
	ft_printf("ret is %d\n", ret);

	ret = ft_printf("character tests: '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c'\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't');
	ft_printf("ret is %d\n", ret);

	ret = ft_printf("character tests: '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c' '%c'\n", '1', '2', '3', '4', '5', '0', '*', '%', ' ', '\t', '\n', '-', 0, 47, 126, 125, 124, 123, 33, 34);
	ft_printf("ret is %d\n", ret);

	ret = ft_printf("print character '%10c'\n", '*');
	ft_printf("ret is %d\n", ret);

	ret = ft_printf("print character '%-10c'\n", '*');
	ft_printf("ret is %d\n", ret);

	ret = ft_printf("char '%-100c'\n", 'c');
	ft_printf("ret is %d\n", ret);
}







