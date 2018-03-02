/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 16:16:49 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/04 16:16:51 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int he;
	int search;

	he = 0;
	while (he < length)
	{
		i = 0;
		search = 0;
		while (i < length)
		{
			if (i != he)
				if (tab[i] == tab[he])
				{
					search = 1;
					break ;
				}
			i++;
		}
		if (!search)
			return (tab[he]);
		he++;
	}
	return (tab[he]);
}
