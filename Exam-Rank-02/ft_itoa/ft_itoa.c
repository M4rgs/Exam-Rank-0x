#include <stdio.h>
#include <stdlib.h>

int countnbr(int nbr)
{
    int cnt = 0;
    if (nbr == 0)
        return 1;
    if (nbr < 0)
    {
        nbr = -nbr;
        cnt++;
    }
    while (nbr != 0)
    {
        nbr = nbr / 10;
        cnt++;
    }
    return (cnt);
}

char    *ft_itoa(int nbr)
{
    int i = 0;
    int count = countnbr(nbr);
    char *p = malloc(count + 1);
    if (nbr < 0)
    {
        p[0] = '-';
        nbr = -nbr;
    }
    if (nbr == 0)
        p[0] = '0';
    p[count] = '\0';
    count--;
    while (nbr != 0)
    {
        p[count] = (nbr % 10) + 48;
        nbr = nbr / 10;
        count--;
    }
    return (p);
}