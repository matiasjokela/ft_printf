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

long long	arg_len_int(t_data *data, long long arg)
{
	long long	len;

	len = ft_longlen(arg);
	if (data->width > len)
		len = data->width;
	if (data->precision > len)
		len = data->precision;
	if (len == data->precision && arg < 0)
		len++;
	if ((data->blank == 1 || data->plus == 1) && (len == ft_intlen(arg) \
	|| len == data->precision))
		len++;
	data->total_len += len;
	return (len);
}

char	*ft_ltoa(long long n)
{
	long long	i;
	long long	j;
	char		*stri;

	i = ft_longlen(n);
	j = 0;
	stri = (char *)malloc(sizeof(char) * i + 1);
	if (stri == NULL)
		return (NULL);
	stri[i--] = '\0';
	if (n == -9223372036854775807 - 1)
		return (min_long(stri));
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

char	*min_long(char *str)
{
	str[0] = '-';
	str[1] = '9';
	str[2] = '2';
	str[3] = '2';
	str[4] = '3';
	str[5] = '3';
	str[6] = '7';
	str[7] = '2';
	str[8] = '0';
	str[9] = '3';
	str[10] = '6';
	str[11] = '8';
	str[12] = '5';
	str[13] = '4';
	str[14] = '7';
	str[15] = '7';
	str[16] = '5';
	str[17] = '8';
	str[18] = '0';
	str[19] = '8';
	return (str);
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
