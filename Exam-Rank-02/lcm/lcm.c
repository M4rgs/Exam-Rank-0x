  unsigned int    lcm(unsigned int a, unsigned int b)
  {
    unsigned int lcm = 1;
    int y = (int)a;
    int h = (int)b;
    if (y <= 0 || h <= 0)
        return (0);
    while (lcm <= 1000000)
    {
        if ((lcm % a == 0 ) && (lcm % b == 0 ))
        {
            return (lcm);
            break ;
        }
        else
            lcm++;
    }
  }