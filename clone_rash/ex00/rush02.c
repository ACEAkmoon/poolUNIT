/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmudrak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 12:36:30 by vmudrak           #+#    #+#             */
/*   Updated: 2017/07/30 12:36:40 by vmudrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int i_x;
	int j_y;

	j_y = -1;
	while (++j_y < y)
	{
		i_x = -1;
		while (++i_x < x)
		{
			if ((i_x == 0 && j_y == 0) || (i_x == x - 1 && j_y == 0))
				ft_putchar('A');
			if ((y != 1 && j_y == y - 1) && (i_x == 0 || i_x == x - 1))
				ft_putchar('C');
			if (((j_y > 0 && j_y < y - 1) || (i_x > 0 && i_x < x - 1))
				&& !(j_y > 0 && j_y < y - 1 && i_x > 0 && i_x < x - 1))
				ft_putchar('B');
			if (j_y > 0 && j_y < y - 1 && i_x > 0 && i_x < x - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
