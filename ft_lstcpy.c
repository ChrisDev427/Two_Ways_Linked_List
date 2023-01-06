/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 14:08:25 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/05 16:56:26 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

t_list	*ft_lstcpy(t_list **lst)
{
	t_list	*lstcpy;
	t_list	*tmp;
	t_list	*new;

	tmp = *lst;
	while (tmp)
	{
		new = ft_lstnew(tmp->data);
		ft_lstadd_back(&lstcpy, new);
		tmp = tmp->next;
	}


	return (lstcpy);
}
