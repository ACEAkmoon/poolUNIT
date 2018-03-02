/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:41:21 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/03 18:41:23 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tmp;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tmp = (int*)malloc(sizeof(int) * (max - min));
	if (tmp == NULL)
		return (0);
	while (min < max)
	{
		tmp[i] = min;
		min++;
		i++;
	}
	*range = tmp;
	return (i);
}
