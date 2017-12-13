/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 21:35:14 by exam              #+#    #+#             */
/*   Updated: 2016/08/19 21:50:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*tmp;
	t_list	*premier = lst;
	int		change = 1;

	while (change){
		change = 0;
		lst = premier;
		while (lst->next)
		{
			if (!cmp(lst->data, lst->next->data)){
				change = 1;
				tmp->data = lst->next->data;
				lst->next->data = lst->data;
				lst->data = tmp->data;
			}
			lst = lst->next;
		}
	}
	return (premier);
}
