#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb = (nb % 10) + 48;
	write(1, &nb, 1);
}

int		is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int num)
{
	int		i;

	i = 2;
	int num2 = num;
	if (num <= 0)
		return ;
	while (i < num2)
	{
		while (!is_prime(i))
			i++;
		if (num % i == 0)
		{
			printf("%d", i);
			num = num / i;
			if (num == 1)
				break;
			printf("*");
		}
		else
		{
			i++;
		}
	}
	if (num == num2)
		printf("%d", num);
}

int		main(int argc, char **argv)
{
	int		num;
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	num = atoi(argv[1]);
	fprime(num);
    printf("\n");
}
