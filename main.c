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


	printf("return: %d\n", ft_printf("Test %%0 f: {%0 f}\n", -0.000000));
	printf("return: %d\n", printf("Test %%0 f: {%0 f}\n", -0.000000));


}
