#include <stdio.h>

char *ft_rot42(char *str);

int main(void)
{
	char str[] = "HELLO hello";
	ft_rot42(str);
	printf("%s\n", str);
	return (0);
}

//https://www.zootle.net/afda/rot42.shtml