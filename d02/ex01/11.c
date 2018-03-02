/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 14:19:57 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/26 14:20:03 by akrushin         ###   ########.fr       */
/*               x                                                            */
/* ************************************************************************** */

int	ft_putchar(char q);

void	ft_print_reverse_alphabet(void)

{
	char alphabet;
	alphabet = 'z';
	while(alphabet >= 'a')
	{
		ft_putchar(alphabet);
		alphabet--;
	}
}
