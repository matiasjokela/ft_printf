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
	t_data	*data;

	va_start(ap, format);
	data = (t_data *)malloc(sizeof(t_data));
	if (data == NULL)
		return (-1);
	data->total_len = 0;
	read_and_write(format, ap, data);
	va_end(ap);
	return (data->total_len);
}

void	print_modulo(t_data *data)
{
	int	len;

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

void	read_and_write(const char *format, va_list ap, t_data *data)
{
	char 	*mod;
	int		i;

	i = 0;
	while (1)
	{
		mod = ft_strchr(&format[i], '%');
		if (mod != NULL)
		{
			write(1, &format[i], mod - &format[i]);
			data->total_len += mod - &format[i];
			i += mod - &format[i];
		}			
		else
		{
			mod = ft_strchr(&format[i], '\0');
			write(1, &format[i], mod - &format[i]);
			data->total_len += mod - &format[i];
			break;
		}
		if (convert(format, &i, data, ap) == 1)
			dispatch(data, ap);
	}
}