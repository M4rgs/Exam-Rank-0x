#include <unistd.h>

int ft_isalpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void process_string(char *str)
{
    int i = 0;
    int is_new_word = 1;

    while (str[i]) 
	{
        if (ft_isalpha(str[i])) 
		{
            if (is_new_word) 
			{
                if (str[i] >= 'a' && str[i] <= 'z') 
				{
                    ft_putchar(str[i] - 32);
                } 
				else 
				{
                    ft_putchar(str[i]);
                }
                is_new_word = 0;
            } 
			else 
			{
                if (str[i] >= 'A' && str[i] <= 'Z') 
				{
                    ft_putchar(str[i] + 32);
                } 
				else 
				{
                    ft_putchar(str[i]);
                }
            }
        }
		else 
		{
            ft_putchar(str[i]);
            if (str[i] == ' ') 
			{
                is_new_word = 1;
            }
        }
        i++;
    }
}

int main(int ac, char **av)
{
    int j = 1;

    if (ac >= 2) 
	{
        while (j < ac) 
		{
            process_string(av[j]);
            ft_putchar('\n');
            j++;
        }
    }
	else
    	ft_putchar('\n');
}
