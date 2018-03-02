/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 13:00:31 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/13 13:00:32 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
char	*spaces(char *str);
int		ft_count(char **parse);
int		ft_double_count(char **parse);
int		eval_expr(char *str);
int		ft_strlen(char *str);
int		ft_parse_nbr(char **parse);
int		ft_operation(char opr, int l_oprnd, int r_oprnd);

#endif
