#include <stdarg.h>
#include <unistd.h>
static int	hex_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}
int	ft_putchar(int c)
{
	return (write (1, &c, 1));
}
int	put_hexa(unsigned int n)
{
	int	lenthg;

	lenthg = hex_len(n);
	if (n == 0)
		lenthg++;
    char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		put_hexa(n / 16);
	ft_putchar(hex_digits[n % 16]);
	return (lenthg);
}
int	ft_putnbr(int nb)
{
	int	res;

	res = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (nb < 0)
	{
		res += ft_putchar('-');
		nb = -nb;
		res += ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		res += ft_putnbr(nb / 10);
		res += ft_putnbr(nb % 10);
	}
	else if (nb <= 9)
		res += ft_putchar(nb + 48);
	return (res);
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

static int	printf_format(char specify, va_list args)
{
	int	count;

	count = 0;
	if (specify == '%')
		count += ft_putchar('%');
	else if (specify == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specify == 'd' || specify == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (specify == 'x' )
		count += put_hexa(va_arg(args, unsigned int));
	else if (specify == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(specify);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		rtr;
	va_list	args;

	i = 0;
	rtr = 0;
	va_start(args, format);
	if (write(1, "", 0) < 0)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break ;
			rtr += printf_format(format[++i], args);
			i++;
		}
		else
			rtr += ft_putchar(format[i++]);
	}
	va_end(args);
	return (rtr);
}