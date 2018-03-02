/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 19:47:22 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/28 19:47:24 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div_temp;
	int mod_temp;

	div_temp = *a / *b;
	mod_temp = *a % *b;
	*a = div_temp;
	*b = mod_temp;
}
