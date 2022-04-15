



#include "ft_printf.h"

void	print_char(t_data *data, va_list ap)
{
	long long		len;
	char			*print;
	unsigned char	c;

	data->unsigned_mod = (unsigned char)va_arg(ap, int);
	data->precision = 0;
	c = data->unsigned_mod;
	print = (char *)malloc(sizeof(char) * (len * 2));
	if (print == NULL)
		exit(-1);
	len = 1;
	if (data->width > len)
		len = data->width;
	data->total_len += len;
	set_padding_uint(data, print, &c, len);
	write_print(data, print, len, 0);
	free(print);
}