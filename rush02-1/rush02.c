int		ft_putchar(char c);

void	check_put(int i_x, int i_y, int x, int y)
{
	if ((i_x == 0 || i_x == x - 1) && i_y == 0)
		ft_putchar('A');
	else if ((i_x == 0 || i_x == x - 1) && i_y == y - 1)
		ft_putchar('C');
	else if ((i_x > 0 && i_x < x - 1) && (i_y > 0 && i_y < y - 1))
		ft_putchar(' ');
	else if ((i_x > 0 && i_x < x - 1) && (i_y == 0 || i_y == y - 1))
		ft_putchar('B');
	else if ((i_y > 0 && i_y < y - 1) && (i_x == 0 || i_x == x - 1))
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int i_x;
	int i_y;

	i_x = 0;
	i_y = 0;
	while (i_y < y)
	{
		while (i_x <= x)
		{
			check_put(i_x, i_y, x, y);
			i_x++;
		}
		ft_putchar('\n');
		i_y++;
		i_x = 0;
	}
}
