#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        char *p = av[1];
        while (p[i])
        {
            if ((p[i] >= 'a'  && p[i] < 'z') || (p[i] >= 'A' && p[i] < 'Z'))
            {
               ft_putchar(p[i] + 1); 
            }
            else if (p[i] == 'z')
            {
                ft_putchar('a');
            }
            else if (p[i] == 'Z')
            {
                ft_putchar('A');
            }
            else
            {
                ft_putchar(p[i]);
            }
            i++;
        }
    }
    ft_putchar('\n');
}