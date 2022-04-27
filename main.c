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
	specs_one_int("Test %%#-1.0o: {%#-1.0o}", 0); wrong
	specs_one_int("Test %%#-1.0u: {%#-1.0u}", 0);
	specs_one_int("Test %%#-1.0x: {%#-1.0x}", 0);
	specs_one_int("Test %%#-1.0X: {%#-1.0X}", 0);
*/

	printf("return: %d\n", ft_printf("Test %%#-1.0u: {%#-1.0o}", 0));
	printf("return: %d\n", printf("Test %%#-1.0u: {%#-1.0o}", 0));


}
