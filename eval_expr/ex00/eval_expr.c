/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 13:31:51 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/13 19:29:44 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_parse_nbr(char **parse)
{
	int	nbr;
	int	negativ;

	nbr = 0;
	negativ = 1;
	if ((*parse)[0] == '+' || (*parse)[0] == '-')
	{
		if ((*parse)[0] == '-')
			negativ = -1;
		*parse = *parse + 1;
	}
	if ((*parse)[0] == '(')
	{
		*parse = *parse + 1;
		nbr = ft_count(parse);
		if ((*parse)[0] == ')')
			*parse = *parse + 1;
		return (negativ * nbr);
	}
	while ((*parse)[0] >= '0' && (*parse)[0] <= '9')
	{
		nbr = (nbr * 10) + (*parse)[0] - '0';
		*parse = *parse + 1;
	}
	return (negativ * nbr);
}

int	ft_count(char **parse)
{
	char	opr;
	int		l_oprnd;
	int		r_oprnd;

	l_oprnd = ft_parse_nbr(parse);
	while ((*parse)[0] != '\0' && (*parse)[0] != ')')
	{
		opr = (*parse)[0];
		*parse = *parse + 1;
		if (opr == '+' || opr == '-')
			r_oprnd = ft_double_count(parse);
		else
			r_oprnd = ft_parse_nbr(parse);
		l_oprnd = ft_operation(opr, l_oprnd, r_oprnd);
	}
	return (l_oprnd);
}

int	ft_double_count(char **parse)
{
	char	opr;
	int		l_oprnd;
	int		r_oprnd;

	l_oprnd = ft_parse_nbr(parse);
	while ((*parse)[0] == '*' || (*parse)[0] == '/' || (*parse)[0] == '%')
	{
		opr = (*parse)[0];
		*parse = *parse + 1;
		r_oprnd = ft_parse_nbr(parse);
		l_oprnd = ft_operation(opr, l_oprnd, r_oprnd);
	}
	return (l_oprnd);
}

int	eval_expr(char *str)
{
	str = spaces(str);
	if (str[0] == '\0')
		return (0);
	return (ft_count(&str));
}
