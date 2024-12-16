#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void print_string(char *str)
{
	int i;

	i = 0;
	while (str[i] <= ' ' && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		while (str[i] > ' ')
		{
			ft_putchar(str[i]);
			i++;
		}
		while (str[i] <= ' ' && str[i] != '\0')
			i++;
		if (str[i - 1] <= ' ' && str[i - 1] != '\0' && ft_strlen(str) > i)
			ft_putstr(" ");
	}
}
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int l = 0;
    int k = 0;
    int v = 0;
    char *p = av[1];
    if (ac == 2)
    {
        while (p[i++] == ' ')
            j++;
        while (p[i] != ' ')
            i++;
        char *o = malloc(i + 1);
        j = l;
        while (l < i)
        {
            o[k] = p[l];
            l++;
            k++;
        }
        o[k] = '\0';
        l = j;
        while (p[l])
            l++;
        char *u = malloc((l - j) + 1);
        while (i < l)
        {
            u[v] = p[i];
            i++;
            v++;
        }
        u[v] = '\0';
        char *q = malloc(k + v + 2);
        k = 0;
        v = 0;
        i = 0;
        while (u[v] == ' ')
            v++;
        while (u[v])
        {
            q[i] = u[v];
            i++;
            v++;
        }
        q[i] = ' ';
        i++;
        while (o[k] == ' ')
            k++;
        while (o[k])
        {
            q[i] = o[k];
            i++;
            k++;
        }
        q[i] = '\0';
        print_string(q);
        free(u);
        free(o);
    }
    else if (ac > 2)
        ft_putstr(av[1]);
    write (1, "\n", 1);

}