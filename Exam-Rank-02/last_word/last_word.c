#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    char v[255];
    int y = 0;
    char *p = av[1];
    if (ac == 2)
    {
        while (p[i])
        {
            i++;
        }
        i--;
        while (p[i] == ' ')
        {
            i--;
            if (i == 0)
                break ;
        }
        
        while (p[i] != ' ')
        {
            y++;
            i--;
        }
        i++;
        while (y > 0)
        {
            write (1, &p[i], 1);
            i++;
            y--;
        }
    }
    write (1, "\n", 1);
}