/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_functs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 13:13:45 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/13 19:42:13 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char		*spaces(char *str)
{
	int		i;
	int		j;
	char	*is_str;

	i = 0;
	j = 0;
	is_str = (char*)malloc(ft_strlen(str) + 1);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			is_str[j] = str[i];
			j++;
		}
		i++;
	}
	is_str[j] = '\0';
	return (is_str);
}

int			ft_operation(char opr, int l_oprnd, int r_oprnd)
{
	if (opr == '*')
		return (l_oprnd * r_oprnd);
	else if (opr == '/')
		return (l_oprnd / r_oprnd);
	else if (opr == '+')
		return (l_oprnd + r_oprnd);
	else if (opr == '-')
		return (l_oprnd - r_oprnd);
	else if (opr == '%')
		return (l_oprnd % r_oprnd);
	else
		return (0);
}
