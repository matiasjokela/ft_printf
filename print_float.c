


#include "ft_printf.h"

void	print_float(t_data *data, va_list ap)
{
	//long long	len;
	//char		*print;
	char		*float_str;
	long double	arg;

	arg = check_length_mod_int(data, ap);
	printf("arg: %Lf\n", arg);
	float_str = get_float_str(data, arg);

	
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
		float_str = ft_dtoa(arg * -1.0);
	}
	else
		float_str = ft_dtoa(arg);
	return (float_str);
}

char	*ft_dtoa(long double n)
{
	int		i;

	i = ft_floatlen(n);
	printf("i: %d", i);
	return ("jeejee");
}

int	ft_floatlen(long double n)
{
	long long	i;
	long long	tmp;

	i = 0;
	tmp = n / 1;
	i += ft_longlen(tmp);
	printf("n: %Lf\n", n);


	return i;
}