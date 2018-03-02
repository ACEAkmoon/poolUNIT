#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char smile = 0;
	printf("///////////// %c\n", smile);


	char str[10] = "Good";
	char str2[10] = "Job!";
    printf("Yes: %s\n", ft_strcat(str, str2));
    printf("Yes: %s\n", str2);

	
    //printf("No: %d\n", ft_strcat(str2));


    char smile3 = 0;
	printf("///////////// %c\n", smile3);

    return (0);
}