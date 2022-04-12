/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:44:15 by mjokela           #+#    #+#             */
/*   Updated: 2022/04/05 16:44:26 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long	ft_longlen(long long n)
{
	long long	len;

	if (n < 0)
		len = 2;
	else
		len = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	clear_data(t_data *data)
{
	data->minus = 0;
	data->zero = 0;
	data->plus = 0;
	data->blank = 0;
	data->hash = 0;
	data->width = 0;
	data->precision = -1;
	data->mod_h = 0;
	data->mod_hh = 0;
	data->mod_l = 0;
	data->mod_ll = 0;
	data->mod_ld = 0;
	data->conversion = 0;
}

void	print_data(t_data *data)
{
	printf("minus: %d\n", data->minus);
	printf("zero: %d\n", data->zero);
	printf("plus: %d\n", data->plus);
	printf("blank: %d\n", data->blank);
	printf("hash: %d\n", data->hash);
	printf("width: %d\n", data->width);
	printf("precision: %d\n", data->precision);
	printf("mod_h: %d\n", data->mod_h);
	printf("mod_hh: %d\n", data->mod_hh);
	printf("mod_l: %d\n", data->mod_l);
	printf("mod_ll: %d\n", data->mod_ll);
	printf("mod_L: %d\n", data->mod_ld);
	printf("conversion: %c\n", data->conversion);
}
