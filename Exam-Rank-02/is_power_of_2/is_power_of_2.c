int	    is_power_of_2(unsigned int n)
{
    int y = (int)n;
    if (y < 0)
        return 0;
    int i;
    
    i = 0;
    if (n == 0)
        return 0;
    while (i <= n)
    {
        if (i * i == n)
            return 1;
        i++;
    }
    return 0;
}