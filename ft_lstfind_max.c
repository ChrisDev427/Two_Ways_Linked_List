/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:46:00 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/05 16:57:02 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

int	ft_lstfind_max(t_list **lst)
{
	t_list	*actual;
	int		tmp;
	int		i;
	int		node;

	actual = *lst;
	i = 1;
	node = 1;
	tmp = actual->data;
	while (actual)
	{
		if (actual->next != NULL && actual->next->data > tmp)
		{
			tmp = actual->next->data;
			i++;
			node = i;
		}
		else
			i++;
		actual = actual->next;
	}
	return (node);
}
