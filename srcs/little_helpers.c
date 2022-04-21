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

#include "../includes/ft_printf.h"

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
	data->signed_mod = 0;
	data->unsigned_mod = 0;
	data->float_mod = 0.0;
	data->conversion = 0;
}

void	fill_str(unsigned long long tmp, int *i, int j, char *str)
{
	while (tmp / 10 != 0)
	{
		str[*i] = tmp % 10 + '0';
		tmp = tmp / 10;
		*i -= 1;
		j--;
	}
	str[*i] = tmp % 10 + '0';
	*i -= 1;
	j--;
	while (j > 0)
	{
		str[*i] = '0';
		*i -= 1;
		j--;
	}
}
