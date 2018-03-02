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
	char	random[4]; {0, 0, 0, 1};

	while (!((random[0] == 9) && (random[1] == 9)))
	{
		ft_putchar(random[0] + 48);
		ft_putchar(random[1] + 48);
		ft_putchar(' ');
		ft_putchar(random[2] + 48);
		ft_putchar(random[3] + 48);
		if (!((random[0] == 9) && (random[1] == 8))) 
			ft_putchar(','); 
			ft_putchar(' ');
		random[3]++;
		if ((random[3] = random[3] % 10) == 0)
			random[2] = (random[2] + 1);
		if (random[2] == 10)
		{
			random[2] = random[0];
			random[1]++;
			if ((random[1] = random[1] % 10) == 0)
				random[0]++;
			random[3] = random[1] + 1;
		}
	}
}
