#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char str[30] = "unit unit";
	char str2[30] = "bocal!";
    printf("%u\n", ft_strlcat(str, str2, 50));

    return (0);
}