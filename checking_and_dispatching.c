/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_and_dispatching.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:58:37 by mjokela           #+#    #+#             */
/*   Updated: 2022/04/12 14:58:41 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		print_int(data, ap);
	else if (data->conversion == 'o')
		print_octal(data, ap);
	else if (data->conversion == 'x' || data->conversion == 'X')
		print_hex(data, ap);
	else if (data->conversion == 'u')
		print_uint(data, ap);
}
