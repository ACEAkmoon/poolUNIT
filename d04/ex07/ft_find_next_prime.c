/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 20:31:08 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/29 20:31:10 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_is_prime(int nb)
{
	int q;

	q = 3;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while ((q * q) <= nb)
	{
		if ((nb % q) == 0)
			return (0);
		q += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	if (nb <= 2)
		return (2);
	if ((nb % 2) == 0)
		nb++;
	while (nb < (ft_recursive_power(2, 31)) - 1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb += 2;
	}
	return (-1);
}
