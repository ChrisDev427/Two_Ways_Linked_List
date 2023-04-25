/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_ways_linked_list.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <chmassa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:23:26 by chmassa           #+#    #+#             */
/*   Updated: 2023/04/25 11:27:52 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TWO_WAYS_LINKED_LIST_H
# define TWO_WAYS_LINKED_LIST_H
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	char			*str;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;

//**** lst new node ************************************************************
t_list				*ft_lstnew(char *str);
//**** lst new tools ***********************************************************
t_list				*ft_lstcpy(t_list **lst);
t_list				*ft_lstlast(t_list *lst);
int					ft_lstsize(t_list *lst);
void				ft_sortlst_str(t_list **lst);
char				*ft_lst_to_str(t_list *lst);
char				**ft_lst_to_char_tab(t_list *lst);
int					ft_lst_strcmp(t_list *lst, char *s);
//***** lstadd *****************************************************************
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_position(t_list **lst, t_list *new, int position);
void				ft_lstadd_back(t_list **lst, t_list *new);
//***** lstdel *****************************************************************
void				ft_lstdel_front(t_list **lst);
void				ft_lstdel_back(t_list **lst);
void				ft_lstdel_position(t_list **lst, int position);
void				ft_lstdel_actual(t_list **lst, t_list *tmp);
void				ft_lstdel_all(t_list **lst);
void				ft_lstdel_current(t_list **lst);
//***** lstprint ***************************************************************
void				ft_lstprint(t_list *lst);
void				ft_lstprint_from_head(t_list *lst);
void				ft_lstprint_from_tail(t_list *lst);

#endif