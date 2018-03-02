/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 21:42:01 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/05 21:42:03 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*is_str;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	is_str = (char*)malloc(sizeof(*is_str) * (size));
	if (is_str == NULL)
		return (NULL);
	while (i < size)
	{
		is_str[i] = src[i];
		i++;
	}
	is_str[size] = '\0';
	return (is_str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *stock;
	int			i;
	int			j;

	i = 0;
	stock = malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		stock[i].size_param = j;
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		stock[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
