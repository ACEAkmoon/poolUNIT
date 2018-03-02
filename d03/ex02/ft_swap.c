/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 10:22:10 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/28 10:22:13 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	cache;

	cache = *a;
	*a = *b;
	*b = cache;
}

int	main() 
{
	int q = 9;
	int w = 6;
	int *pointer0;
	pointer0 = &q;
	int *pointer1; 
	pointer1 = &w;

	printf("%d,%d \n",q,w);
	ft_swap(pointer0, pointer1);

	printf("%d,%d",q,w);
	return 0;
}