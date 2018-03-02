/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 18:11:42 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/31 18:11:44 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int	numb;
	int	minus_sign;
	
	numb = 0;
	minus_sign = 1;
	if(str)
	{
		while ((*str == ' ') || (*str == '\t') || (*str == '\n')
				|| (*str == '\v') || (*str == '\f') || (*str == '\r') && *str)
			str++;

		if (str++ && *str == '-')
			minus_sign = -1;
			else(*str == '+');
				str++;

		while (*str >= '0' && *str <= '9')
			numb = numb * 10 + (*str++ - '0');
	}
	return (minus_sign  * numb);
}
