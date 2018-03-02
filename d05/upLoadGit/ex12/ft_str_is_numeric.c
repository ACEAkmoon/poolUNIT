/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 10:56:12 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 10:56:17 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	function(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!function(str[i]))
			return (0);
		i++;
	}
	return (1);
}
