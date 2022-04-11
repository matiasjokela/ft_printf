/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_and_converting.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:15:01 by mjokela           #+#    #+#             */
/*   Updated: 2022/04/07 16:15:04 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	convert(const char *format, int *i, t_data *data, va_list ap)
{
	clear_data(data);
	*i += 1;
	if (!isvalid(format, *i))
		return (0);
	read_data(format, i, data);
	return (1);
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

void	dispatch(t_data *data, va_list ap)
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
