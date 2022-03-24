/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:30:49 by mjokela           #+#    #+#             */
/*   Updated: 2022/03/24 15:31:02 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	read_data(const char *format, int *i, t_data *data)
{
	read_flags(format, i, data);
	read_dimensions(format, i, data);
	read_modifiers(format, i, data);
	data->conversion = format[*i];
	print_data(data);

	
}
void	read_flags(const char *format, int *i, t_data *data)
{
	char	c;

	while (1)
	{
		c = format[*i];
		if (c == '-')
			data->minus = 1;
		else if (c == '0')
			data->zero = 1;
		else if (c == '+')
			data->plus = 1;
		else if (c == ' ')
			data->blank = 1;
		else if (c == '#')
			data->hash = 1;
		else
			break ;
		*i += 1;
	}
}

void	read_dimensions(const char *format, int *i, t_data *data)
{
	if (format[*i] > '0' && format[*i] <= '9')
	{
		data->width = ft_atoi(&format[*i]);
		while (format[*i] > '0' && format[*i] <= '9')
			*i += 1;
	}
	if (format[*i] == '.')
	{
		*i += 1;
		data->precision = ft_atoi(&format[*i]);
		while (format[*i] > '0' && format[*i] <= '9')
			*i += 1;
	}
}

void	read_modifiers(const char *format, int *i, t_data *data)
{
	if (format[*i] == 'h' && format[*i + 1] != 'h')
		data->mod_h = 1;
	else if (format[*i] == 'h')
		data->mod_hh = 1;
	else if (format[*i] == 'l' && format[*i + 1] != 'l')
		data->mod_l = 1;
	else if (format[*i] == 'l')
		data->mod_ll = 1;
	else if (format[*i] == 'L')
		data->mod_L = 1;
	while (ft_strchr(CONVERSION, format[*i]) == NULL && format[*i] != '\0')
		*i += 1;
	
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
	printf("mod_L: %d\n", data->mod_L);
	printf("conversion: %c\n", data->conversion);
}