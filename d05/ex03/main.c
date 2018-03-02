#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char dest[50];
	char src[50];
	ft_strcpy(src, "Test message Bro!");
	ft_strcpy(dest, src);
	printf("%s\n", src);
	return (0);
}