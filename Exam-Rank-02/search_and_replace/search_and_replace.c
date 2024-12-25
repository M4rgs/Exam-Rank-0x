#include <unistd.h>
int main(int ac , char **av)
{

    int i = 0;
    if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
    {
    char *p = av[1];
    char a1 = av[2][0];
    char a2 = av[3][0];
        while (p[i])
        {
            if (p[i] == a1)
            {
                write (1, &a2, 1);
            }
            else
                write (1, &p[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}