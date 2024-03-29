/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_current.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:05:09 by axfernan          #+#    #+#             */
/*   Updated: 2023/04/25 11:29:04 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

void	ft_lstdel_current(t_list **lst)
{
	t_list	*temp;

	temp = (*lst);
	if (!(*lst))
		return ;
	if ((*lst)->prev == NULL)
	{
		ft_lstdel_front(&(*lst));
	}
	else if ((*lst)->next == NULL)
	{
		(*lst) = (*lst)->prev;
		ft_lstdel_back(&(*lst));
	}
	else
	{
		temp = (*lst)->next;
		((*lst)->prev)->next = (*lst)->next;
		((*lst)->next)->prev = (*lst)->prev;
		free((*lst)->str);
		free((*lst));
		(*lst) = temp;
	}
}
