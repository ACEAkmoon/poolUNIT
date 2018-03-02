/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:32:37 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/08 20:32:38 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	throw_div_error(void)
{
	ft_putstr("Stop : division by zero\n");
	return (0);
}

int	throw_mod_error(void)
{
	ft_putstr("Stop : modulo by zero\n");
	return (0);
}
