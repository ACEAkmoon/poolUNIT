#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str);

int main(void)
{
	char str[30] = "brother you is godlike!";
    printf("%s", ft_strupcase(str));
    return (0);
}