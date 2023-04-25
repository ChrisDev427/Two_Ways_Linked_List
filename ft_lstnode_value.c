/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnode_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:01:48 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 11:28:42 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

int	ft_lstnode_value(t_list **lst, int node)
{
	int	value;
	int	position;

	position = 1;
	while (*lst)
	{
		if (position == node)
		{
			value = (*lst)->str;
		}
		*lst = (*lst)->next;
		position ++;
	}
	return (value);
}
