#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int b = 0;
    int n = 0;
    int tab[255] = {0};
    if (ac == 3)
    {
        char *s1 = av[1];
        char *s2 = av[2];
        while (s1[i] && s2[j])
        {
            if (s1[i] == s2[j])
                i++;
            j++;
        }
        if (s1[i] == '\0')
            ft_putchar('1'); 
        else
            ft_putchar('0'); 
    }
    ft_putchar('\n');
}