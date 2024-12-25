#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int i = 0;
	int len = abs((end - start)) + 1;
	int *res = (int *)malloc(sizeof(int) * len);
	
	while (i < len)
	{
		if (start < end)
		{
			res[i] = end;
			end--;
			i++;
		}
		else
		{
			res[i] = end;
			end++;
			i++;
		}
	}
        return (res);
}