/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortlst_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:36:35 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 11:28:09 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

void	ft_sortlst_str(t_list **lst)
{
	t_list	*tmp;
	char	*tmp_str;

	tmp = *lst;
	while (tmp)
	{
		if (tmp->next != NULL && ft_strcmp(tmp->str, tmp->next->str) >= 0)
		{
			tmp_str = tmp->str;
			tmp->str = tmp->next->str;
			tmp->next->str = tmp_str;
			tmp = *lst;
		}
		else
			tmp = tmp->next;
	}
}
