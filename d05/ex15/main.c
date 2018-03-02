#include <stdio.h>
#include <unistd.h>

int		ft_str_is_printable(char *str);

int main(void)
{
	char smile = 0;
	printf("///////////// %c\n", smile);

	char str[80] = "\ngrwg\fesg";
    printf("Yes: %d\n", ft_str_is_printable(str));

    char smile2 = 0;
	printf("///////////// %c\n", smile2);

	char str2[80] = "$-+*/=";
    printf("No: %d\n", ft_str_is_printable(str2));

    char smile3 = 0;
	printf("///////////// %c\n", smile3);

    return (0);
}