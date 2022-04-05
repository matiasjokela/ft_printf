/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:06:07 by mjokela           #+#    #+#             */
/*   Updated: 2022/03/20 15:06:10 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	t_data	*data;

	va_start(ap, format);
	i = 0;
	data = (t_data *)malloc(sizeof(t_data));
	if (data == NULL)
		return (-1);
	data->total_len = 0;
	check_and_print(format, &i, data, ap);
	va_end(ap);
	return (data->total_len);
}

void	check_and_print(const char *format, int *i, t_data *data, va_list ap)
{
	while (format[*i] != '\0')
	{
		if (format[*i] != '%')
			ft_putchar_pro(format[*i], data, 1);
		else
		{
			if (format[*i + 1] == '%')								// Doesn't work like this, needs fixing
				ft_putchar_pro(format[*i++], data, 1);
			else
				convert(format, i, data, ap);
		}
		*i += 1;
	}
}

void	convert(const char *format, int *i, t_data *data, va_list ap)
{
	clear_data(data);
	*i += 1;
	if (!isvalid(format, *i))
		return ;
	read_data(format, i, data);
	print_conversion(data, ap);
}

int	isvalid(const char *format, int i)
{
	while (ft_strchr(CONVERSION, format[i]) == NULL)
	{
		if (ft_strchr(SPECIFIERS, format[i]) == NULL || format[i] == '\0')
			return (0);
		i++;
	}
	return (1);
}

void	print_conversion(t_data *data, va_list ap)
{
	if (data->conversion == 'd' || data->conversion == 'i')
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
		print_int(data, data->signed_mod);
	}
}

void	print_int(t_data *data, long long arg)
{
	long long	len;
	char		*print;
	char		*itoa_string;
	int			i;
	int			precision;

	if (arg < 0)
	{
		data->blank = 0;
		data->plus = 0;
		itoa_string = ft_ltoa(arg * -1);
	}
	else
		itoa_string = ft_ltoa(arg);
	len = int_arg_len(data, arg);
	if ((data->blank == 1 || data->plus == 1) && (len == ft_intlen(arg) \
	|| len == data->precision))
		len++;
	data->total_len += len;
	print = (char *)malloc(sizeof(char) * (len * 2));
	if (print == NULL)
		exit(-1);
	i = ft_strlen(itoa_string);
	precision = data->precision - i;
	if (data->zero == 1)
		ft_memset(print, '0', len * 2);
	else
		ft_memset(print, ' ', len * 2);
	ft_memcpy(&print[len - i], itoa_string, i);
	if (precision > 0)
		ft_memset(&print[len - i - precision], '0', precision);
	if (data->zero == 1)
	{
		if (arg < 0)
			print[0] = '-';
		else if (data->plus == 1)
			print[0] = '+';
		else if (data->blank == 1)
			print[0] = ' ';
		write(1, print, len);
	}
	else
	{
		i = 0;
		while (print[i] == ' ')
			i++;
		if (arg < 0)
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
	free(print);
	free(itoa_string);
}
