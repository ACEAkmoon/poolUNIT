/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:23:35 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/08 20:23:36 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

typedef int	(*t_op_functions)(int, int);

int		ft_atoi(char *str);
int		add(int a, int b);
int		mul(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		throw_div_error(void);
int		throw_mod_error(void);
#endif
