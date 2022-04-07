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

long long	int_arg_len(t_data *data, long long arg)
{
	long long	len;

	len = ft_longlen(arg);
	if (data->width > len)
		len = data->width;
	if (data->precision > len)
		len = data->precision;
	if (len == data->precision && arg < 0)
		len++;
	return (len);
}

char	*ft_ltoa(long long n)
{
	long long	i;
	long long	j;
	char		*stri;

	i = ft_longlen(n);
	j = 0;
	if (n == -9223372036854775807 - 1)
		return ("-9223372036854775808");
	stri = (char *)malloc(sizeof(char) * i + 1);
	if (stri == NULL)
		return (NULL);
	stri[i--] = '\0';
	if (n < 0)
	{
		stri[0] = '-';
		n *= -1;
	}
	while (n / 10 != 0)
	{
		stri[i--] = n % 10 + '0';
		n = n / 10;
	}
	stri[i--] = n % 10 + '0';
	return (stri);
}

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
	data->mod_L = 0;
	data->conversion = 0;
}

void	ft_putchar_pro(char c, t_data *data, int i)
{
	while (i > 0)
	{
		ft_putchar(c);
		data->total_len++;
		i--;
	}
}
