/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 20:53:15 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/27 20:53:18 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int random[2];

	random[0] = 0;
	while (random[0] <= 98)
	{
		random[1] = random[0] + 1;
		while (random[1] <= 99)
		{
			ft_putchar(random[0] / 10 + 48);
			ft_putchar(random[0] - random[0] / 10 * 10 + 48);
			ft_putchar(' ');
			ft_putchar(random[1] / 10 + 48);
			ft_putchar(random[1] - random[1] / 10 * 10 + 48);
			if (!(random[0] == 98 && random[1] == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			random[1]++;
		}
		random[0]++;
	}
}
