/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 18:38:32 by pichrist          #+#    #+#             */
/*   Updated: 2016/08/24 18:39:48 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	ft_list_last(t_list *begin_list)
{
	if (begin_list)
		while (begin_list->next)
			begin_list = begin_list->next;
	return (begin_list);
}
