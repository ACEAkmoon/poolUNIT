/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 21:33:37 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/02 21:33:38 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(char **a, char **b)
{
	char	*cash;

	cash = *a;
	*a = *b;
	*b = cash;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int symbol;

	symbol = 0;
	while (str[symbol])
	{
		ft_putchar(str[symbol]);
		symbol++;
	}
}

int		main(int argc, char **argv)
{
	int		j;

	j = 1;
	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			ft_swap(&argv[j], &argv[j + 1]);
			j = 1;
		}
		else
			j++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
