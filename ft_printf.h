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
# include "./libft/libft.h"
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
	int 				mod_L;
	//modifier values
	long long			signed_mod;
	unsigned long long	unsigned_mod;
	//conversion
	char				conversion;
	//length
	int					total_len;
}			t_data;

int			ft_printf(const char *format, ...);
int			convert(const char *format, int *i, t_data *data, va_list ap);
int			isvalid(const char *format, int i);
void		clear_data(t_data *data);
void		read_data(const char *format, int *i, t_data *data);
void		read_flags(const char *format, int *i, t_data *data);
void		read_dimensions(const char *format, int *i, t_data *data);
void		read_modifiers(const char *format, int *i, t_data *data);
void		print_data(t_data *data);												//REMOVE
void		ft_putchar_pro(char c, t_data *data, int i);
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
char		*min_long(char *str);


#endif

