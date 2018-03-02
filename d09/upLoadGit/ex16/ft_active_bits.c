/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:54:18 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/04 15:54:20 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int score;

	score = 0;
	while (value > 0)
	{
		if ((value & 1) == 1)
			score++;
		value >>= 1;
	}
	return (score);
}
