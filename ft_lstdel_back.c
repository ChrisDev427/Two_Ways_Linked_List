/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:08:22 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 11:29:07 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

void	ft_lstdel_back(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	tmp = *lst;
	if (tmp->next == NULL)
	{
		free(tmp->str);
		free(tmp);
		*lst = NULL;
	}
	else
	{
		while (tmp)
		{
			if (tmp->next->next == NULL)
			{
				free(tmp->next->str);
				free(tmp->next);
				tmp->next->prev = NULL;
				tmp->next = NULL;
			}
			tmp = tmp->next;
		}
	}
}
