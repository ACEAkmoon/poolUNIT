#include <stdio.h>
#include <stdlib.h>

int     ft_any(char **tab, int (*f)(char*));

int some (char *cc)
{
    if (cc[0] >= 'A' && cc[0] <= 'Z')
        return 1;
    return 0;
}

int main(void)
{
    char *i[]= {"hello", 0};
    printf("%d\n", ft_any(i, &some));
}
