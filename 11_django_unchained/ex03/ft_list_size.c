/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 18:34:59 by pichrist          #+#    #+#             */
/*   Updated: 2016/08/24 18:38:14 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;

	if (begin_list)
	{
		i = 1;
		while (begin_list->next)
		{
			begin_list = begin_list->next;
			i++;
		}
		return (i);
	}
	return (0);
}
