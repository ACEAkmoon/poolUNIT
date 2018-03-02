#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char smile = 0;
	printf("////////////////////////////////// %c\n", smile);

	char tmp[50] = "BocalUnit";
	char find[50] = "Seach";
	char *print;
    
	print = ft_strstr(tmp, find);
	printf("Found string: %s\n", print);
	
	char smile2 = 0;
	printf("////////////////////////////////// %c\n", smile2);
	
	char tmp2[50] = "BocalUnitTestSTR";
	char find2[50] = "Unit";
	char *print2;

	print2 = ft_strstr(tmp2, find2);
	printf("Found string: %s\n", print2);

	char smile3 = 0;
	printf("////////////////////////////////// %c\n", smile3);

	return(0);
}