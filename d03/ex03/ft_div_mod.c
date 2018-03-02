/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 19:31:47 by akrushin          #+#    #+#             */
/*   Updated: 2017/07/28 19:31:53 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
