/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:33:59 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/03 18:34:00 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tmp;

	i = 0;
	if (min >= max)
		return (0);
	tmp = (int*)malloc(sizeof(*tmp) * (max - min));
	while (min < max)
	{
		tmp[i] = min;
		min++;
		i++;
	}
	return (tmp);
}
