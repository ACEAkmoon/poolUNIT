/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 13:45:27 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/31 13:45:32 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int symbol;

	symbol = 0;
	while (str[symbol] != '\0')
	{
		ft_putchar(str[symbol]);
		symbol++;
	}
}
