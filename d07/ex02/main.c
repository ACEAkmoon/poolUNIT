#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
	int i;
	int **range = 0;

	i = 0;
	ft_ultimate_range(range, 5, 10);
	return (0);
}
