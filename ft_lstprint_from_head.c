/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_from_head.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:12:15 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 11:28:38 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

void	ft_lstprint_from_head(t_list *lst)
{
	t_list	*tmp;
	int		node;

	if (!lst)
	{
		ft_putstr("Empty list\n");
		return ;
	}
	node = 1;
	tmp = lst;
	ft_putstr("-- list --\n");
	while (tmp)
	{
		ft_printf("node[%d] [%s]\n", node, tmp->str);
		tmp = tmp->next;
		node++;
	}
	ft_putstr("------\n");
}
