/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 15:38:34 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 15:38:36 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (dest[tmp])
		tmp++;
	while (src[i] && i < nb)
	{
		dest[tmp] = src[i];
		tmp++;
		i++;
	}
	dest[tmp] = '\0';
	return (dest);
}
