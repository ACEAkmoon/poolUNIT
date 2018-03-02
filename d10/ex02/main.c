
#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));


int print(int j)
{
	j = j + 4;
	return (j);
}

int main()
{
	int s[] = { 1, 2, 3, 4, 5, 6, 7 };
	int *d = ft_map(s, 7, &print);
	printf("%d\n", d[0]);
	return (0);
}
