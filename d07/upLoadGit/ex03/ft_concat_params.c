/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 21:17:46 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/03 21:17:47 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		tmp_size(int argc, char **argv)
{
	int i;
	int j;
	int tmp;

	i = 1;
	tmp = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			tmp++;
			j++;
		}
		i++;
	}
	if (argc > 2)
		tmp += argc - 2;
	return (tmp);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		q;
	int		tmp;
	char	*lol;

	tmp = tmp_size(argc, argv);
	lol = (char*)malloc(sizeof(char) * (tmp + 1));
	i = 1;
	q = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			lol[q++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			lol[q++] = '\n';
		i++;
	}
	lol[q] = '\0';
	return (lol);
}
