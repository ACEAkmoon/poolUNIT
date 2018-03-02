#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest[50];
	char src[50];
	ft_strncpy(src, "Also test message Bro!", 22);
	ft_strncpy(dest, src, 22);
	printf("%s\n", dest);
	return (0);
}