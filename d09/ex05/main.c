#include <stdio.h>

int ft_button(int i, int j, int k);

int main(void)
{
	printf("%d\n", ft_bouton(1, 2, 3));    //2
	printf("%d\n", ft_bouton(2, 1, 3));    //2
	printf("%d\n", ft_bouton(3, 1, 2));    //2
	printf("%d\n", ft_bouton(3, 2, 1));    //2
	printf("%d\n", ft_bouton(3, 3, 3));    //3
	printf("%d\n", ft_bouton(3, 2, 3));    //3
	printf("%d\n", ft_bouton(10, 2, 30));  //10
	printf("%d\n", ft_bouton(-1, -2, -3)); //-2
	printf("%d\n", ft_bouton(50, 30, 10)); //30
	return (0);
}
