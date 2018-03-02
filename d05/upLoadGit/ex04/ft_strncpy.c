/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 00:07:10 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 00:07:11 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	symbol;

	symbol = 0;
	while (symbol < n && src[symbol])
	{
		dest[symbol] = src[symbol];
		symbol++;
	}
	while (symbol < n)
	{
		dest[symbol] = '\0';
		symbol++;
	}
	return (dest);
}
