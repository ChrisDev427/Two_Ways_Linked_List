/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chrisdev427@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:47:06 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/05 09:52:59 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

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
