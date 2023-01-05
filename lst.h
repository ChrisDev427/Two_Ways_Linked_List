/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:44:44 by chmassa           #+#    #+#             */
/*   Updated: 2023/01/05 11:52:17 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//**** struct lst ****************************
typedef struct s_list
{
	int				data;
	struct s_list	*prec;
	struct s_list	*next;
}				t_list;

//**** lst tools *****************************
t_list	*ft_lstnew(int nb);
t_list	*ft_lstlast(t_list *lst);
//***** lstadd *****************************************************************
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_position(t_list **lst, t_list *new, int position);
void	ft_lstadd_back(t_list **lst, t_list *new);
//***** lstdel *****************************************************************
void	ft_lstdel_front(t_list **lst);
void	ft_lstdel_back(t_list **lst);
void	ft_lstdel_position(t_list **lst, int position);
void	ft_lstdel_all(t_list **lst);
//***** lstsize, lstprint ******************************************************
int		ft_lstsize(t_list *lst);
void	lstprint(t_list *lst);
void	ft_lstprint_from_head(t_list *lst);
void	ft_lstprint_from_tail(t_list *lst);
#endif
