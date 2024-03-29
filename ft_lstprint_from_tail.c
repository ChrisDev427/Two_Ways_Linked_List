/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_from_tail.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:12:15 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 11:28:33 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

void	ft_lstprint_from_tail(t_list *lst)
{
	t_list	*tmp;
	int		node;

	node = ft_lstsize(lst);
	if (!lst)
	{
		ft_printf("Empty list\n");
		return ;
	}
	tmp = ft_lstlast(lst);
	while (tmp)
	{
		ft_printf("node[%d] value|%s|\n", node, tmp->str);
		tmp = tmp->prev;
		node--;
	}
}
