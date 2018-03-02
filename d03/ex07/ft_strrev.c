/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 20:08:12 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/28 20:08:18 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int q;
	int w;
	int j;

	q = 0;
	w = 0;
	while (str[w] != '\0')
		w++;
	w++;
	while (q < w)
	{
		j = str[q];
		str[q] = str[w];
		str[w] = j;
		q++;
		w++;
	}
	return (str);
}