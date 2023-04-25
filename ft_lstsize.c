/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:47:06 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 11:28:14 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "two_ways_linked_list.h"

int	ft_lstsize(t_list *lst)
{
	int	nb_element;

	nb_element = 0;
	while (lst)
	{
		nb_element++;
		lst = lst->next;
	}
	return (nb_element);
}
