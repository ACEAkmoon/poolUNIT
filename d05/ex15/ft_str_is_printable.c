/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 11:37:45 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 11:37:48 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	printable(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
