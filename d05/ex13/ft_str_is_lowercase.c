/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 11:09:12 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 11:09:14 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
