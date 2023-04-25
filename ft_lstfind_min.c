/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:55:31 by axfernan          #+#    #+#             */
/*   Updated: 2023/04/25 11:28:52 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

int	ft_lstfind_min(t_list **lst)
{
	t_list	*actual;
	int		tmp;
	int		i;
	int		node;

	actual = *lst;
	i = 1;
	node = 1;
	tmp = actual->str;
	while (actual)
	{
		if (actual->next != NULL && actual->next->str < tmp)
		{
			tmp = actual->next->str;
			i++;
			node = i;
		}
		else
			i++;
		actual = actual->next;
	}
	return (node);
}
