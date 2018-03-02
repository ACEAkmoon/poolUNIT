/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 21:53:46 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/29 21:53:48 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		function(int q, int z)
{
	if (q >= z)
		return (q - z);
	else
		return (z - q);
}

int		calculation(int col, int line, int *ln)
{
	int x;
	int y;
	int calculate;

	calculate = 0;
	if (col == line)
	{
		calculate++;
	}
	x = 0;
	while (x < col)
	{
		y = 0;
		while (!(ln[y] == x || function(ln[y], x) == line - y) && y < line)
			y++;
		if (y < line)
		{
			x++;
			continue;
		}
		ln[line] = x;
		calculate += calculation(col, line + 1, ln);
		x++;
	}
	return (calculate);
}

int		ft_eight_queens_puzzle(void)
{
	int ln[8];

	return (calculation(8, 0, ln));
}
