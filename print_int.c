/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:11:16 by mjokela           #+#    #+#             */
/*   Updated: 2022/04/07 16:11:21 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_int(t_data *data, va_list ap)
{
	long long	len;
	char		*print;
	char		*num_str;
	long long	arg;

	print = (char *)malloc(sizeof(char) * (len * 2));
	if (print == NULL)
		exit(-1);
	arg = check_length_mod_int(data, ap);
	if (arg < 0)
	{
		data->blank = 0;
		data->plus = 0;
		num_str = ft_ltoa(arg * -1);
	}
	else
		num_str = ft_ltoa(arg);
	len = arg_len_int(data, arg);
	set_padding(data, print, num_str, len);
	write_print(data, print, len, 0);
	free(num_str);
	//free(print);
}

void	set_padding(t_data *data, char *print, char *num_str, int len)
{
	int	i;
	int	precision;

	i = ft_strlen(num_str);
	precision = data->precision - i;
	if (data->zero == 1)
		ft_memset(print, '0', len * 2);
	else
		ft_memset(print, ' ', len * 2);
	ft_memcpy(&print[len - i], num_str, i);
	if (precision > 0)
		ft_memset(&print[len - i - precision], '0', precision);
}

void	write_print(t_data *data, char *print, int len, int i)
{
	if (data->zero == 1)
	{
		if (data->signed_mod < 0)
			print[0] = '-';
		else if (data->plus == 1)
			print[0] = '+';
		else if (data->blank == 1)
			print[0] = ' ';
		write(1, print, len);
	}
	else
	{
		while (print[i] == ' ')
			i++;
		if (data->signed_mod < 0)
			print[--i] = '-';
		else if (data->plus == 1)
			print[--i] = '+';
		else if (data->blank == 1)
			print[--i] = ' ';
		if (data->minus == 1)
			write(1, &print[i], len);
		else
			write(1, print, len);
	}
}

long long	check_length_mod_int(t_data *data, va_list ap)
{
	if (data->mod_h == 1)
		data->signed_mod = (short)va_arg(ap, int);
	else if (data->mod_hh == 1)
		data->signed_mod = (char)va_arg(ap, int);
	else if (data->mod_l == 1)
		data->signed_mod = (long)va_arg(ap, long);
	else if (data->mod_ll == 1)
		data->signed_mod = (long long)va_arg(ap, long long);
	else
		data->signed_mod = (int)va_arg(ap, int);
	return (data->signed_mod);
}