/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 16:30:48 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/08 16:30:51 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *is_tab;

	i = 0;
	is_tab = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		is_tab[i] = f(tab[i]);
		i++;
	}
	return (is_tab);
}
