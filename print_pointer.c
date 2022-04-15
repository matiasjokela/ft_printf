



#include "ft_printf.h"

void	print_pointer(t_data *data, va_list ap)
{
	long long	len;
	char		*print;
	char		*pstr;
	unsigned long long	arg;

	data->unsigned_mod = (unsigned long long)va_arg(ap, unsigned long long);
	arg = data->unsigned_mod;
	data->precision = 0;
	pstr = ft_ltoau_base(arg, 16, data);
	print = (char *)malloc(sizeof(char) * (len * 2));
	if (print == NULL)
		exit(-1);
	len = ft_strlen(pstr);
	if (data->width > len)
		len = data->width;
	data->total_len += len;

	set_padding_pointer(data, print, pstr, len);
	write_print(data, print, len, 0);
	free(pstr);
	free(print);
}

void	set_padding_pointer(t_data *data, char *print, char *pstr, int len)
{
	int	i;
	int	precision;

	i = ft_strlen(pstr);
	precision = data->precision - i;
	ft_memset(print, ' ', len * 2);
	if (!(data->precision == 0 && data->unsigned_mod == 0 && data->width != 0))
		ft_memcpy(&print[len - i], pstr, i);
	if (precision > 0)
		ft_memset(&print[len - i - precision], '0', precision);
	if (precision > 0)
		i = len - i - precision;
	else
		i = len - i;
	printf("here\n");
	//print[i - 2] = '0';
	//print[i - 1] = 'x';
}