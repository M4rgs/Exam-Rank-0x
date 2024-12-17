#include <unistd.h>
void    ft_putchar(char c)
{
    write (1, &c, 1);
}
int		main(int ac, char **av)
{
    int i = 0;
    char *p = av[1];
    if (ac == 2)
    {
	while (p[i])
    {
        if (p[i] >= 'a' && p[i] <= 'z')
            ft_putchar(p[i] - 32);
        else if (p[i] >= 'A' && p[i] <= 'Z')
            ft_putchar(p[i] + 32);
        else
            ft_putchar(p[i]);
        i++;
    }
    }
    ft_putchar('\n');
}