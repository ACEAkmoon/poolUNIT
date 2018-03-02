#include <unistd.h>

int		ft_putchar(char q)
{
	write (1, &q, 1);
	return 0;	 
}