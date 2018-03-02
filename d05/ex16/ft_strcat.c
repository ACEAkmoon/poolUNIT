/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 13:59:15 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 13:59:16 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (dest[tmp])
		tmp++;
	while (src[i])
	{
		dest[tmp] = src[i];
		tmp++;
		i++;
	}
	dest[tmp] = '\0';
	return (dest);
}
