/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_float.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:23:09 by mjokela           #+#    #+#             */
/*   Updated: 2022/04/19 12:23:12 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_float(t_data *data, va_list ap)
{
	long long	len;
	char		*print;
	char		*float_str;
	long double	arg;

	if (data->precision == -1)
		data->precision = 6;
	arg = check_length_mod_float(data, ap);
	float_str = get_float_str(data, arg);
	len = arg_len_float(data, float_str);
	print = (char *)malloc(sizeof(char) * (len * 2));
	if (print == NULL)
		exit(-1);
	set_padding_float(data, print, float_str, len);
	write_print_float(data, print, len, 0);
	free(float_str);
	free(print);


	
}

long double	check_length_mod_float(t_data *data, va_list ap)
{
	if (data->mod_ld == 1)
		data->float_mod = (long double)va_arg(ap, long double);
	else
		data->float_mod = (double)va_arg(ap, double);
	return (data->float_mod);
}

char	*get_float_str(t_data *data, long double arg)
{
	char	*float_str;

	if (arg < 0)
	{
		data->blank = 0;
		data->plus = 0;
		float_str = ft_dtoa(arg * -1.0, data);
	}
	else
		float_str = ft_dtoa(arg, data);
	return (float_str);
}

char	*ft_dtoa(long double n, t_data *data)
{
	int					i;
	char				*str;
	unsigned long long	tmp;

	i = ft_floatlen(n, data);
	str = (char *)malloc(sizeof(char) * i + 2);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, i-- + 2);
	tmp = (unsigned long long)n;
	if (data->precision != 0)
		get_fractal(&n, data, &i, str);
	else
	{
		if (!(n - (long double)tmp == 0.5 && tmp % 2 == 0))
			n += 0.5;
		if (data->hash == 1)
			str[i--] = '.';
	}
	tmp = (unsigned long long)n;
	while (tmp / 10 != 0)
	{
		str[i--] = tmp % 10 + '0';
		tmp = tmp / 10;
	}
	str[i] = tmp % 10 + '0';
	return (str);
}

int	ft_floatlen(long double n, t_data *data)
{
	long long	i;

	i = 0;
	i += ft_longlen(n / 1);
	if (!(data->precision == 0 && data->hash == 0))
		i += data->precision + 1;
	return i;
}

void	get_fractal(long double *n, t_data *data, int *i, char *str)
{
	int					j;
	long double			fract;
	unsigned long long	tmp;

	j = 0;
	fract = *n - (long long)*n;
	while (j++ < data->precision)
		fract *= 10;
	fract += 0.5;
	tmp = (unsigned long long)fract;
	j--;
	if (ft_longlen((long long)fract) > j && tmp != 0)
	{
		tmp = 0;
		*n += 1;
		*i += 1;
	}

	while (tmp / 10 != 0)
	{
		str[*i] = tmp % 10 + '0';
		tmp = tmp / 10;
		*i -= 1;
		j--;
	}
	str[*i] = tmp % 10 + '0';
	*i -= 1;
	j--;
	while (j > 0)
	{
		str[*i] = '0';
		*i -= 1;
		j--;
	}
	str[*i] = '.';
	*i -= 1;
}

long long	arg_len_float(t_data *data, char *float_str)
{
	long long	len;

	len = ft_strlen(float_str);
	if (data->width > len)
		len = data->width;
	if (len != data->width && (double_is_negative(data->float_mod) == 1 \
	|| data->plus == 1 || data->blank == 1))
		len++;
	data->total_len += len;
	return (len);
}

void	set_padding_float(t_data *data, char *print, char *fstr, int len)
{
	int	i;

	i = ft_strlen(fstr);
	if (data->zero == 1)
		ft_memset(print, '0', len * 2);
	else
		ft_memset(print, ' ', len * 2);
	ft_memcpy(&print[len - i], fstr, i);
}

void	write_print_float(t_data *data, char *print, int len, int i)
{
	if (data->zero == 1)
	{
		if (double_is_negative(data->float_mod) == 1)
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
		if (double_is_negative(data->float_mod) == 1)
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

int	double_is_negative(double n)
{
	unsigned long long	*tmp;

	tmp = (unsigned long long *)&n;
	return ((int)(*tmp >> 63));
}
