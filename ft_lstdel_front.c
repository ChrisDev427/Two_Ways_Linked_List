/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:11:01 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/05 13:39:30 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	ft_lstdel_front(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	(*lst)->prec = NULL;
	free(tmp);
}
