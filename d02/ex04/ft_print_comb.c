/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 20:37:49 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/27 20:37:53 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char q);

void	ft_print_comb(void)
{
	int	random[3];

	random[0] = 48;
	while (random[0] < 58)
	{
		random[1] = random[0] + 1;
		while (random[1] < 58)
		{
			random[2] = random[1] + 1;
			while (random[2] < 58)
			{
				ft_putchar(random[0]);
				ft_putchar(random[1]);
				ft_putchar(random[2]);
				if (!(random[0] == 55 && random[1] == 56 && random[2] == 57))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				random[2]++;
			}
			random[1]++;
		}
		random[0]++;
	}
}
