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
	va_list ap;
	int i;
	t_data *data;

	va_start(ap, format);
	i = 0;
	data = (t_data*)malloc(sizeof(t_data));
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
			ft_putchar_pro(format[*i], data);
		else
		{
			if (format[*i + 1] == '%')
				ft_putchar_pro(format[*i++], data);
			else
				convert(format, i, data, ap);
		}
		*i += 1;
	}
}

void	ft_putchar_pro(char c, t_data *data)
{
	ft_putchar(c);
	data->total_len++;
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
		print_int(data, ap);
}

void	print_int(t_data *data, va_list ap)
{
	int	arg;
	int	len;

	arg = va_arg(ap, int);
	len = ft_intlen(arg);
	while (data->width > len)
	{
		if (data->zero == 0 && data->precision == -1 && data->minus == 0)
			ft_putchar_pro(' ', data);
		else
			ft_putchar_pro('0', data);
		data->width--;
	}
	if (data->plus == 1 && arg >= 0)
		ft_putchar_pro('+', data);
	else if (data->blank == 1)
		ft_putchar_pro(' ', data);
	data->total_len += len;
	ft_putnbr(arg);


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