/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmudrak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 17:25:47 by vmudrak           #+#    #+#             */
/*   Updated: 2017/07/30 17:25:50 by vmudrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int i_x;
	int j_y;

	j_y--;
	while (++j_y < y)
	{
		i_x = -1;
		while (++i_x < x)
		{
			if ((i_x == 0 && j_y == 0) || (i_x == x - 1 && j_y == y - 1)
				|| (i_x == 0 && j_y == y - 1) || (i_x == x - 1 && j_y == 0))
				ft_putchar('o');
			if ((i_x > 0 && i_x < x - 1)
				&& !(j_y > 0 && j_y < y - 1 && i_x > 0 && i_x < x - 1))
				ft_putchar('-');
			if ((j_y > 0 && j_y < y - 1)
				&& !(j_y > 0 && j_y < y - 1 && i_x > 0 && i_x < x - 1))
				ft_putchar('|');
			if (j_y > 0 && j_y < y - 1 && i_x > 0 && i_x < x - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
