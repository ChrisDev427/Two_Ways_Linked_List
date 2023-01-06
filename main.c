/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:39:15 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/05 17:20:42 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

int main(void)
{
	t_list	*list;
	t_list	*new;
	int		i;

	list = NULL;
	i = 1;
/*	while (i < 10)
	{
		new = ft_lstnew(i * 4);
		ft_lstadd_back(&list, new);
		i++;
	}*/
	new = ft_lstnew(427); 
	ft_lstadd_back(&list, new);
	new = ft_lstnew(428); 
	ft_lstadd_front(&list, new);
/*	new = ft_lstnew(428); 
	ft_lstadd_position(&list, new, 5);
	new = ft_lstnew(999); 
	ft_lstadd_back(&list, new);*/
	lstprint(list);


	ft_lstdel_front(&list);
	lstprint(list);
	puts("");
//	ft_lstdel_back(&list);
//	ft_lstdel_front(&list);
//	ft_lstclear(&list);
//	ft_lstdel_position(&list, 8);
//	ft_lstprint(list);
//	puts("");
//	printf("lst_size = %d\n",  ft_lstsize(list));

//	system("leaks a.out");
	return (0);
}
