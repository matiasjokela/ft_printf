

#include "../includes/ft_printf.h"

void	print_bits(t_data *data, va_list ap)
{
	long long	arg;
	int			len;
	int			arr[64];
	int			i;

	arg = check_length_mod_int(data, ap);
	i = 0;
	if (data->mod_h == 1)
		len = 16;
	else if (data->mod_hh == 1)
		len = 8;
	else if (data->mod_l == 1 || data->mod_ll == 1)
		len = 64;
	else
		len = 32;
	while (i < len)
	{
		arr[i] = (arg & 1);
		arg = arg >> 1;
		i++;
	}
	while (--i >= 0)
		ft_putnbr(arr[i]);
}