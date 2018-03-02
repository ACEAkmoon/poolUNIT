#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char str[30] = "CONTINUE IN THIS SPIRIT";
    printf("%s", ft_strlowcase(str));
    return (0);
}