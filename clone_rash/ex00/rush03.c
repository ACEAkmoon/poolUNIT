/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmudrak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 19:07:11 by vmudrak           #+#    #+#             */
/*   Updated: 2017/07/30 19:07:13 by vmudrak          ###   ########.fr       */
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
			if ((i_x == 0 && j_y == 0) || (i_x == 0 && j_y == y - 1))
				ft_putchar('A');
			if ((x != 1 && i_x == x - 1) && (j_y == 0 || j_y == y - 1))
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
