/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heops.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/30 15:05:32 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/30 15:05:34 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

/*void	heops(int spec_number)
{
	int top;
	int bottom_line;
	int calculate;
	int stars;
	int r;
	//int c;
	//int n;
	r=0;
	stars = 0;
	calculate = 0;
	if (spec_number == 1)
	{
		bottom_line = 7;
		top = (bottom_line / 2);*/

int		heops(int line_nb, int space)
{
	int i;
	while (i < space)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	i = 0;
	while (i <= line_nb * 2)
	{
		while ((i == line_nb + width_door) && (space < door_size) && (width_door <= door_size / 2))
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (space - 1);
}

		/*while (calculate < top)
		{
			ft_putchar(' ');
			calculate++;
			//continue;
			if (calculate == top) {
				ft_putchar('/');
				calculate++;
			}
		}
		while (calculate > top && calculate <= --top) {
			//r++;
			ft_putchar('*');


			calculate++;
		}
	}
}*/
