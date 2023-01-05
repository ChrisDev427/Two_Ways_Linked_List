/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:08:22 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/05 14:02:11 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	ft_lstdel_back(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	tmp = *lst;
	while (tmp)
	{
		if (tmp->next->next == NULL)
		{
			free(tmp->next);
			tmp->next->prec = NULL;
			tmp->next = NULL;
		}
		tmp = tmp->next;
	}
}
