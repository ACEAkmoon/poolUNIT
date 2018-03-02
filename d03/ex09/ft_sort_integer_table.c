/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 20:12:56 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/28 20:13:06 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	q;
	int	w;

	q = 0;
	while (q < size)
	{
		if (tab[q] > tab[q++])
		{
			w = tab[q++];
			tab[q++] = tab[q];
			tab[q] = w;
			q = 0;
		}
		else
			q++;
	}
}
