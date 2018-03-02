/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 07:29:31 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/01 07:29:33 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		function(char c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))
		|| ((c >= '0') && (c <= '9')))
		return (1);
	return (0);
}

int		ft_strlowcase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int		ft_strupcase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int text;

	i = 0;
	text = 0;
	while (str[i])
	{
		if (ft_strlowcase(str[i]) && text == 0)
			str[i] -= 32;
		else if (ft_strupcase(str[i]) && text == 1)
			str[i] += 32;
		if (!function(str[i]))
			text = 0;
		else
			text = 1;
		i++;
	}
	return (str);
}
