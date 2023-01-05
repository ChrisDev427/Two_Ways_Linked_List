/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_from_tail.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:12:15 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/05 11:48:38 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	ft_lstprint_from_tail(t_list *lst)
{
	t_list	*tmp;
	int		node;

	node = ft_lstsize(lst);;

	if (!lst)
	{
		puts("Empty list");
		return ;
	}
	tmp = ft_lstlast(lst);
	while(tmp)
	{
		printf("node[%d] value|%d|\n", node, tmp->data);
		tmp = tmp->prec;
		node--;
	}
}
