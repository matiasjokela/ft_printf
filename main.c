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
		specs_one_dbl("Test %%010f: {%010f}\n", values[i]);
		specs_one_dbl("Test %%#010f: {%#010f}\n", values[i]);
		specs_one_dbl("Test %%0#10.1f: {%0#10.1f}\n", values[i]);
		specs_one_dbl("Test %%0 10f: {%0 10f}\n", values[i]);
		specs_one_dbl("Test %%+010f: {%+010f}\n", values[i]);
*/

	char s[4];

	s[0] = 'j';
	s[1] = 6;
	s[2] = 'j';
	s[3] = 0;

	/*Non printable characters don't work*/

	printf("return: %d\n", ft_printf("%-2c", s[1]));
	printf("return: %d\n", printf("%-2c", s[1]));





	//printf("return: %d\n", ft_printf("%0s", NULL));
	//printf("return: %d\n", printf("%0s", NULL));


}
