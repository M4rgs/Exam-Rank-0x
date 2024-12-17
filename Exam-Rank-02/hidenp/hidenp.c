#include <unistd.h>
int		main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    char *s2 = av[2];
    char *s1 = av[1];
    if (ac == 3)
    {
	while (s2[i])
	{
		if (s1[j] && s1[j] == s2[i])
			j++;
		i++;
	}
	if (!s1[j])
		write(1, "1", 1);
	else
		write(1, "0", 1);
    }
    write(1, "\n", 1);
}