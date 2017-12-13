/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 18:43:46 by pichrist          #+#    #+#             */
/*   Updated: 2016/08/24 18:58:07 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list elem;
	
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

t_list	*ft_list_push_params(int c, char **v)
{
	int i = 0;
	t_list begin = ft_create_elem(v[i++]);
	if (c > 1)
	{
		t_list next = ft_create_elem(v[i++]);
		begin->next = next;
		while (i < c)
		{
			t_list new_next = ft_create_elem(av[i++]);
			next->next = new_next;
			next = new_next;
		}
	}
}
