/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 17:40:37 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 17:40:39 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	tmp;

	tmp = 0;
	while (src[tmp])
	{
		if (tmp < size - 1)
			dest[tmp] = src[tmp];
		tmp++;
	}
	dest[tmp] = '\0';
	return (tmp);
}
