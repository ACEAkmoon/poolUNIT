/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 08:43:17 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/30 08:43:23 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	check_put(int line, int col, int x, int y)
{
	if ((line == 0 || line == x - 1) && col == 0)
		ft_putchar('A');
	else if ((line == 0 || line == x - 1) && col == y - 1)
		ft_putchar('C');
	else if ((line > 0 && line < x - 1) && (col > 0 && col < y - 1))
		ft_putchar(' ');
	else if ((line > 0 && line < x - 1) && (col == 0 || col == y - 1))
		ft_putchar('B');
	else if ((col > 0 && col < y - 1) && (line == 0 || line == x - 1))
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int line;
	int col;

	line = 0;
	col = 0;
	while (col < y)
	{
		while (line <= x)
		{
			check_put(line, col, x, y);
			line++;
		}
		ft_putchar('\n');
		col++;
		line = 0;
	}
}
