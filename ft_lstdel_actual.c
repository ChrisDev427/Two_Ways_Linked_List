/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_actual.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:20:55 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 11:29:14 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

void	ft_lstdel_actual(t_list **lst, t_list *tmp)
{
	t_list	*tmp2;

	if (!(*lst))
		return ;
	if (!tmp)
		return ;
	if (tmp->next == NULL)
		ft_lstdel_back(lst);
	else if (tmp->prev == NULL)
		ft_lstdel_front(lst);
	else
	{
		free(tmp->str);
		tmp2 = tmp;
		tmp = tmp->prev;
		tmp->next = tmp->next->next;
		tmp->next->prev = tmp;
		free(tmp2);
	}
}
