/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 18:43:28 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 18:43:38 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		base(char *tmp)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (tmp[0] == '\0' || tmp[1] == '\0')
		return (0);
	while (tmp[i])
	{
		j = i + 1;
		if (tmp[i] == '+' || tmp[i] == '-')
			return (0);
		else if (tmp[i] < ' ' || tmp[i] > '~')
			return (0);
		while (tmp[j])
		{
			if (tmp[i] == tmp[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *tmp)
{
	int	i;
	int final_nbr[50];
	int	size;

	i = 0;
	size = 0;
	if (base(tmp))
	{
		if (nbr < 0)
		{
			nbr -= nbr;
			ft_putchar('-');
		}
		while (tmp[size])
			size++;
		while (nbr)
		{
			final_nbr[i++] = nbr % size;
			nbr /= size;
		}
		if (i == 0)
			ft_putchar(tmp[final_nbr[i]]);
		while (--i >= 0)
			ft_putchar(tmp[final_nbr[i]]);
	}
}
