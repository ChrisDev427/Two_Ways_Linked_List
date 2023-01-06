/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnode_value.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:01:48 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/06 13:21:11 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstnode_value(t_list **lst, int node)
{
	int	value;
	int	position;

	position = 1;
	while (*lst)
	{
		if (position == node)
		{
			value = (*lst)->data;
		}
		*lst = (*lst)->next;
		position ++;
	}
	return (value);
}
