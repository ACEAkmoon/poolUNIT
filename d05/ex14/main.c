#include <stdio.h>
#include <unistd.h>

int		ft_str_is_uppercase(char *str);

int main(void)
{
	char smile = 0;
	printf("///////////// %c\n", smile);

	char str[80] = "!ABCD";
    printf("Yes symbal: %d\n", ft_str_is_uppercase(str));

    char smile2 = 0;
	printf("///////////// %c\n", smile2);

	char str2[80] = "ABCD";
    printf("No symbal: %d\n", ft_str_is_uppercase(str2));

    char smile3 = 0;
	printf("///////////// %c\n", smile3);

    return (0);
}