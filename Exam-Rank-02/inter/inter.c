#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int j;
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
                if (s1[i] == s2[j])
                {
                    if (tab[(int)s1[i]] == 0)
                    {
                        tab[(int)s1[i]] = 1;
                        write (1, &s2[j], 1);
                    }
                }
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}