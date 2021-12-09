#include "libft.h"
#include <stdio.h>


int main (void)
{
	int st[] = {2,3,4};

	ft_memset(st, ' ', 4);
	int i = 0;
	while (i < 3)
	{
		printf("%d\n",st[i]);
		i++;
	}
	return 0;
}
