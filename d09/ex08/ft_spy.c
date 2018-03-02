/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:33:48 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/04 15:33:50 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_is_present(char *str)
{
	char	*go;
	char	*pow;
	char	*hi;
	int		i;
	int		j;

	go = "go";
	pow = "pow";
	hi = "hi";
	i = 0;
	j = 0;
	if (ft_strcmp(str, go) == 0)
		ft_putstr("message!!!\n");
	if (ft_strcmp(str, pow) == 0)
		ft_putstr("message!!!\n");
	if (ft_strcmp(str, hi) == 0)
		ft_putstr("message!!!\n");
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char	str[1000];
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				str[k] = argv[i][j];
				k++;
			}
			j++;
		}
		str[j] = '\0';
		ft_strlowcase(str);
		ft_is_present(str);
		i++;
	}
	return (0);
}
