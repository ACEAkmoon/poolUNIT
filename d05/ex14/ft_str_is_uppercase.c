/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 11:27:23 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 11:27:27 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
