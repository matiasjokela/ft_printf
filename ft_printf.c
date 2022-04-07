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

void	check_and_print(const char *form, int *i, t_data *data, va_list ap)
{
	while (form[*i] != '\0')
	{
		if (form[*i] != '%')
			ft_putchar_pro(form[*i], data, 1);
		else
			convert(form, i, data, ap);
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
	if (data->conversion == '%')
		print_modulo(data);
	else if (data->conversion == 'd' || data->conversion == 'i')
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

void	print_modulo(t_data *data)
{
	int len;

	len = 1;
	if (data->width > 0)
		len = data->width;
	if (data->minus == 1)
	{
		ft_putchar_pro('%', data, 1);
		ft_putchar_pro(' ', data, len - 1);
		return ;
	}
	if (data->zero == 1)
		ft_putchar_pro('0', data, len - 1);
	else
		ft_putchar_pro(' ', data, len - 1);
	ft_putchar_pro('%', data, 1);
}

void	print_int(t_data *data, long long arg)
{
	long long	len;
	char		*print;
	char		*itoa_string;

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
	set_padding(data, print, itoa_string, len);
	write_print(data, print, len, 0);
	free(print);
	free(itoa_string);
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
