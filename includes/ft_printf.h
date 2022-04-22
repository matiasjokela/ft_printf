/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjokela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:59:38 by mjokela           #+#    #+#             */
/*   Updated: 2022/03/20 14:59:41 by mjokela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include ".././libft/libft.h"
# include <stdio.h>															//REMOVE

# define FLAGS "#0- +"
# define SPECIFIERS "#0-+ .*0123456789hlL"
# define CONVERSION "cspdiouxXf%"

typedef struct s_data
{
	//flags
	int					minus;
	int					zero;
	int					plus;
	int					blank;
	int					hash;
	//width and precision
	int					width;
	int					precision;
	//modifiers
	int					mod_h;
	int					mod_hh;
	int					mod_l;
	int					mod_ll;
	int					mod_ld;
	//modifier values
	long long			signed_mod;
	unsigned long long	unsigned_mod;
	long double			float_mod;
	//conversion
	char				conversion;
	//length
	int					total_len;
}			t_data;

int			ft_printf(const char *format, ...);
int			convert(const char *format, int *i, t_data *data);
int			isvalid(const char *format, int i);
void		clear_data(t_data *data);
void		read_data(const char *format, int *i, t_data *data);
void		read_flags(const char *format, int *i, t_data *data);
void		read_dimensions(const char *format, int *i, t_data *data);
void		read_modifiers(const char *format, int *i, t_data *data);
void		ft_putchar_pro(unsigned char c, t_data *data, int i);
void		dispatch(t_data *data, va_list ap);
void		print_int(t_data *data, va_list ap);
long long	arg_len_int(t_data *data, long long arg);
long long	ft_longlen(long long n);
char		*ft_ltoa(long long n);
void		set_padding(t_data *data, char *print, char *num_str, int len);
void		write_print(t_data *data, char *print, int len, int arg);
void		print_modulo(t_data *data);
void		read_and_write(const char *format, va_list ap, t_data *data);
long long	check_length_mod_int(t_data *data, va_list ap);
char		*get_num_str(t_data *data, long long arg);
char		*ft_ltoau_base(unsigned long long n, int base, t_data *data);
void		print_octal(t_data *data, va_list ap);
void		check_length_mod_uint(t_data *data, va_list ap);
long long	arg_len_uint(t_data *data, long long arg, char *oct_str);
void		set_padding_uint(t_data *data, char *print, char *num_str, int len);
void		print_hex(t_data *data, va_list ap);
void		set_padding_hex(t_data *data, char *print, char *num_str, int len);
long long	arg_len_hex(t_data *data, long long arg, char *oct_str);
void		print_uint(t_data *data, va_list ap);
void		print_char(t_data *data, va_list ap);
void		print_pointer(t_data *data, va_list ap);
void		set_padding_pointer(t_data *data, char *print, char *pstr, int len);
void		print_string(t_data *data, va_list ap);
void		set_padding_str(t_data *data, char *print, char *str, int len);
void		print_float(t_data *data, va_list ap);
long double	check_length_mod_float(t_data *data, va_list ap);
char		*get_float_str(t_data *data, long double arg);
char		*ft_dtoa(long double n, t_data *data);
int			ft_floatlen(long double n, t_data *data);
void		get_fractal(long double *n, t_data *data, int *i, char *str);
long long	arg_len_float(t_data *data, char *float_str);
void		set_padding_float(t_data *data, char *print, char *fstr, int len);
void		write_print_float(t_data *data, char *print, int len, int i);
int			double_is_negative(double n);
void		fill_str(unsigned long long tmp, int *i, int j, char *str);
int			count_non_blanks(char *print);

#endif
