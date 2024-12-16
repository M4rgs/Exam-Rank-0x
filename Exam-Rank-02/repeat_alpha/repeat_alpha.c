#include <unistd.h>
int main(int ac, char **av)
{
    char *p = av[1];
    int i = 0;
    char c;
    int t;
    if (ac == 2)
    {
        while (p[i])
        {
            c = p[i];
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				if (c >= 'a' && c <= 'z')
					t = c - 'a';
				if (c >= 'A' && c <= 'Z')
					t = c - 'A';
				while (t > 0)
				{
					write (1, &c, 1);
					t--;
				}
			}
			write (1, &c, 1);
			i++;
        }
    }
    write (1, "\n", 1);
}