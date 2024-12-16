#include <unistd.h>
void    ft_putchar(char c)
{
    write (1, &c, 1);
}
int main(int ac, char **av)
{
    char *p = av[1];
    int i = 0;
    if (ac == 2)
    {
        while (p[i])
        {
            if (p[i] >= 'a' && p[i] <= 'z')
			{
				ft_putchar('m' - p[i] + 'n');
			}
            else if (p[i] >= 'A' && p[i] <= 'Z')
			{
				ft_putchar('M' - p[i] + 'N');
			}
            else
                ft_putchar(p[i]);
			i++;
        }
    }
    write (1, "\n", 1);
}