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
		print_int(data, ap);
}
