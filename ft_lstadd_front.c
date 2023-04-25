/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:21:49 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 11:29:22 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		new->next = *lst;
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
		new->next->prev = new;
	}
}
