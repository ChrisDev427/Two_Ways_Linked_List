/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:07:14 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 11:29:11 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

void	ft_lstdel_all(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	while (*lst)
	{		
		free((*lst)->str);
		tmp = *lst;
		*lst = (*lst)->next;
		free (tmp);
	}
}
