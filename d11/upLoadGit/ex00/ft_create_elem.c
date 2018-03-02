/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:47:45 by akrushin          #+#    #+#             */
/*   Updated: 2017/08/09 18:47:48 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*is_elem;

	is_elem = malloc(sizeof(t_list));
	if (is_elem)
	{
		is_elem->data = data;
		is_elem->next = NULL;
	}
	return (is_elem);
}
