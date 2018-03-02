#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int i;
	int *j;
	i = 0;

	j = ft_range(20, 40);
	while (i < 20)
	{
		printf("%d", j[i]);
		i++;
	}
	return (0);
}