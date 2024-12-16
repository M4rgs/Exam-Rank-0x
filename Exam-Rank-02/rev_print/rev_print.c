#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    char *p = av[1];
    if (ac == 2)
    {
        while (p[i])
            i++;
        i--;
        while (i >= 0)
        {
            write (1, &p[i], 1);
            i--;
        }
    }
    write (1, "\n", 1);
}