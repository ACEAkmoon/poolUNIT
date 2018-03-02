#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str);

int main()
{
    char *c ="-19884627 Good day Bro!";
    int i = ft_atoi(c);
    printf("%d", i);
    return (0);
}