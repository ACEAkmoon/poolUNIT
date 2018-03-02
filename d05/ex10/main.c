#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

int main(void)
{
	char str[80] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
    return (0);
}