#include <stdlib.h>
#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
}
char **ft_split(char *s)
{
    int i = 0;
    int k = 0;
    int j = 0;
    char **p = (char **)malloc(10000 * sizeof(char *));
    while (s[i])
    {
        if (s[i] != ' ')
        {
            j = 0;
            p[k] = (char *)malloc(10000 * sizeof(char *));
            while (s[i] && s[i] != ' ')
            {
                p[k][j] = s[i];
                j++;
                i++;
            }
            p[k][j] = '\0';
            k++;
        }
        else
            i++;
    }
    p[k] = NULL;
    return (p);
}

int main(int ac, char **av)
{
    int  i = 1;
    if (ac == 2)
    {
        char *s = av[1];
        char **p = ft_split(s);
        while (p[i])
        {
            ft_putstr(p[i]);
            ft_putchar(' ');
            i++;
        }
        ft_putstr(p[0]);
    }
    else if (ac > 2)
    {
        ft_putstr(av[1]);
    }
    ft_putchar('\n');
}