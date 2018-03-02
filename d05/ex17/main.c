#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, int nb);

int main(void)
{
	char smile = 0;
	printf("///////////// %c\n", smile);


	char str[10] = "Good ";
	char str2[10] = "Job!!";
    printf("Yes: %s\n", ft_strncat(str, str2, 20));


    char smile3 = 0;
	printf("///////////// %c\n", smile3);

    return (0);
}