/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 02:05:29 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 02:05:31 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;
	int seach;

	i = 0;
	j = 0;
	seach = 0;
	while (to_find[seach])
		seach++;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == seach - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
