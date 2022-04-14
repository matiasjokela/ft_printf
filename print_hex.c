/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:18:18 by mjokela           #+#    #+#             */
/*   Updated: 2022/04/14 16:18:21 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex(t_data *data, va_list ap)
{
	long long			len;
	char				*print;
	char				*oct_str;
	unsigned long long	arg;

	check_length_mod_oct(data, ap);
	arg = data->unsigned_mod;
	if (data->hash == 0 && arg == 0 && data->precision == 0 && data->width == 0)
		return ;
	oct_str = ft_ltoau_base(arg, 16, data);
	len = arg_len_oct(data, arg, oct_str);
	print = (char *)malloc(sizeof(char) * (len * 2));
	if (print == NULL)
		exit(-1);
	set_padding_hex(data, print, oct_str, len);
	write_print(data, print, len, 0);
	free(oct_str);
	free(print);
}

void	set_padding_hex(t_data *data, char *print, char *num_str, int len)
{
	int	i;
	int	precision;

	i = ft_strlen(num_str);
	precision = data->precision - i;
	if (data->zero == 1)
		ft_memset(print, '0', len * 2);
	else
		ft_memset(print, ' ', len * 2);
	if (!(data->precision == 0 && data->unsigned_mod == 0 && data->width != 0))
		ft_memcpy(&print[len - i], num_str, i);
	if (data->hash == 1)
	{
		print[len - i - 2] = '0';
		if (data->conversion == 'x')
			print[len - i - 1] = 'x';
		else
			print[len - i - 1] = 'X';
	}
	if (precision > 0)
		ft_memset(&print[len - i - precision], '0', precision);
}
