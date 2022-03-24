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
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		else
		{
			if (format[i + 1] == '%')
				write(1, &format[i++], 1);
			else
				convert(format, &i, data);
		}			
		i++;
	}
	va_end(ap);
	return 1;
}

void	convert(const char *format, int *i, t_data *data)
{
	clear_data(data);
	*i += 1;
	if (!isvalid(format, *i))
		return ;
	read_data(format, i, data);
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

void	clear_data(t_data *data)
{
	data->minus = 0;
	data->zero = 0;
	data->plus = 0;
	data->blank = 0;
	data->hash = 0;
	data->width = 0;
	data->precision = 0;
	data->mod_h = 0;
	data->mod_hh = 0;
	data->mod_l = 0;
	data->mod_ll = 0;
	data->mod_L = 0;
	data->conversion = 0;
}