/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anestor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 11:17:32 by anestor           #+#    #+#             */
/*   Updated: 2017/07/29 22:41:45 by anestor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int len, int hegt)
{
	int nl;
	int nh;
	int l;
	int h;

	nl = 0;
	nh = 0;
	l = len - 1;
	h = hegt - 1;
	while (nh < hegt)
	{
		while (nl < len)
		{
			if ((nl == 0 && nh == 0) || (nl == l && nh == h && l != 0 && h != 0))
				ft_putchar(47);
			else if ((nl == l && nh == 0) || (nl == 0 && nh == h))
				ft_putchar(92);
			else if (nl == 0 || nh == 0 || nl == l || nh == h)
				ft_putchar('*');
			else
				ft_putchar(' ');
			nl++;
		}
		nl = 0;
		ft_putchar('\n');
		nh++;
	}
}
