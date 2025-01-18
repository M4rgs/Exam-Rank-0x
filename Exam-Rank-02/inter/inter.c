#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int tab[255] = {0};
    if (ac == 3)
    {
        char *s1 = av[1];
        char *s2 = av[2];
        while (s1[i])
        {
            j = 0;
            while (s2[j])
            {
                if (s2[j] == s1[i] && tab[(int)s1[i]] == 0)
                {
                    ft_putchar(s1[i]);
                    tab[(int)s1[i]] = 1;
                }
                j++;
            }
            i++;
        }
    }
    ft_putchar('\n');
}