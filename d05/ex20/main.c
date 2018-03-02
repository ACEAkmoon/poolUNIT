#include <stdio.h>

void 	ft_strcpy(char *a, char *b);

void	ft_putnbr_base(int nb, char *base);

int main(void)
{
	char c[20];

	ft_strcpy(c, "unitfac1234567");
	ft_putnbr_base(0, c); // U
	printf("\n");
	ft_putnbr_base(1, c); // N
	printf("\n");
	ft_putnbr_base(2, c); // I 
	printf("\n");
	ft_putnbr_base(3, c); // T
	printf("\n");
	ft_putnbr_base(4, c); // F
	printf("\n");
	ft_putnbr_base(15, c); // NN
	printf("\n");
	ft_putnbr_base(50, c); // T2
	printf("\n");
	ft_putnbr_base(100, c); // 1i
	printf("\n");
	return (0);
}