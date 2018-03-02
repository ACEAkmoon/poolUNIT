#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

/*int main(void)
{
	char des[30] = "unit unit";
	char sr[30] = "bocal!";
    printf("%u\n", ft_strlcpy(des, sr, 50));

    return (0);
}*/
int		main(void)
{
	char dest[] = "1111";
	char src[] = "2222";
	printf("%d\n%s\n", ft_strlcpy(dest, src, 2), dest);
	return (0);
}
