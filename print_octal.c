/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_octal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:39:29 by mjokela           #+#    #+#             */
/*   Updated: 2022/04/12 15:39:32 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_octal(t_data *data, va_list ap)
{
	long long			len;
	char				*print;
	char				*oct_str;
	unsigned long long	arg;

	check_length_mod_oct(data, ap);
	arg = data->unsigned_mod;
	if (data->hash == 0 && arg == 0 && data->precision == 0 && data->width == 0)
		return ;
	oct_str = ft_ltoau_base(arg, 8);
	len = arg_len_oct(data, arg, oct_str);
	print = (char *)malloc(sizeof(char) * (len * 2));
	if (print == NULL)
		exit(-1);
	set_padding_oct(data, print, oct_str, len);
	write_print(data, print, len, 0);
	free(oct_str);
	free(print);
}

char	*ft_ltoau_base(unsigned long long n, int base)
{
	int		i;
	char	*hex;
	char	stri[65];

	if (base < 2 || base > 16)
		return (NULL);
	i = 63;
	hex = "0123456789ABCDEF";
	ft_bzero(stri, 65);
	while (n / base != 0)
	{
		stri[i--] = hex[n % base];
		n = n / base;
	}
	stri[i] = hex[n % base];
	return (ft_strdup(&stri[i]));
}

void	check_length_mod_oct(t_data *data, va_list ap)
{
	if (data->mod_h == 1)
		data->unsigned_mod = (unsigned short)va_arg(ap, unsigned int);
	else if (data->mod_hh == 1)
		data->unsigned_mod = (unsigned char)va_arg(ap, unsigned int);
	else if (data->mod_l == 1)
		data->unsigned_mod = (unsigned long)va_arg(ap, unsigned long);
	else if (data->mod_ll == 1)
		data->unsigned_mod = (unsigned long long)va_arg(ap, unsigned long long);
	else
		data->unsigned_mod = (unsigned int)va_arg(ap, unsigned int);
	data->blank = 0;
	data->plus = 0;
}

long long	arg_len_oct(t_data *data, long long arg, char *oct_str)
{
	long long	len;
	int			strlen;

	strlen = ft_strlen(oct_str);
	len = strlen;
	if (data->width > len)
		len = data->width;
	if (data->precision > len)
		len = data->precision;
	if (data->hash == 1 && len == strlen && arg != 0)
		len++;
	data->total_len += len;
	return (len);
}

void	set_padding_oct(t_data *data, char *print, char *num_str, int len)
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
		print[len - i - 1] = '0';
	if (precision > 0)
		ft_memset(&print[len - i - precision], '0', precision);
}
