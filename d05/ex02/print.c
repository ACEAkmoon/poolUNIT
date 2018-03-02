#include <unistd.h>

int		ft_atoi(const char *str);

void	print(unsigned char test)
{
	int		i;
	char	c;

	i = 128;
	while (i > 0)
	{
		if (test < i)
		{
			c = '0';
			i = i / 2;
			write(1, &c, 1);
		}
		else
		{
			c = '1';
			write(1, &c, 1);
			test = test - i;
			i = i / 2;
		}
	}
}
