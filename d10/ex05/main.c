#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_comp(int i, int j)
{
	return (i-j);
}

int	main()
{
	int	sorted_tab[5] = {-2, -1, 0, 1, 2};
	int	nonsorted_tab[5] = {-2, 1, 2, -1, 0};
	//int	sorted_tab[4] = {1, 2, 1, 2};
	//int	nonsorted_tab[4] = {2, 1, 1, 2};
	int	sorted = ft_is_sort(sorted_tab, 5, &ft_comp);
	int	nonsorted = ft_is_sort(nonsorted_tab, 5, &ft_comp);
	printf("%i - sorted \n%i - nonsorted\n", sorted, nonsorted);
	return 0;
}
