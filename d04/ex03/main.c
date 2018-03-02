#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	printf("%d\n", ft_recursive_power(2, -1));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(2, 1));
	printf("%d\n", ft_recursive_power(2, 4));
	printf("%d\n", ft_recursive_power(2, 8));
	printf("%d\n", ft_recursive_power(4, 6));
	return (0);
}