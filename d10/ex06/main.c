/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:00:48 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/08 20:00:52 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int						i;
	char					c;
	char const				*op = "+-*/%d\0";
	t_op_functions const	func_arr[] = {add, sub, mul, div, mod};

	if (argc != 4)
		return (0);
	c = argv[2][0];
	i = 0;
	if (c == '/' && !ft_atoi(argv[3]))
		return (throw_div_error());
	if (c == '%' && !ft_atoi(argv[3]))
		return (throw_mod_error());
	while (op[i])
	{
		if (op[i] == c)
		{
			ft_putnbr(func_arr[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putstr("0\n");
	return (0);
}
