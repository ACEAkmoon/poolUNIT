/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:24:22 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/05 14:24:24 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_tmp(char *str, int i)
{
	int	count;

	count = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		count++;
		i++;
	}
	return (count);
}

int		ft_words(char *str)
{
	int	i;
	int	sum;
	int	count;

	i = 0;
	sum = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			i++;
			sum = 1;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
		{
			count += (sum == 1) ? 1 : 0;
			sum = 0;
			i++;
		}
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tmp;
	int		i;
	int		j;
	int		q;

	i = 0;
	j = 0;
	if ((tmp = malloc(sizeof(char*) * (ft_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		if (str[i])
		{
			q = 0;
			if ((tmp[j] = malloc(sizeof(char) * ft_tmp(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
				tmp[j][q++] = str[i++];
			tmp[j++][q] = '\0';
		}
	}
	tmp[j] = NULL;
	return (tmp);
}
