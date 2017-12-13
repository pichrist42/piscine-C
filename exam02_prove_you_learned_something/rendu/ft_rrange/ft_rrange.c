/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 20:21:36 by exam              #+#    #+#             */
/*   Updated: 2016/08/19 20:43:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}

int		*ft_rrange(int start, int end)
{
	int	*arr;
	int i;
	if (!(arr = (int*)malloc(sizeof(int) * abs(end - start + 1))))
		return (0);
	i = -1;
	if (start <= end)
		while (++i + start <= end)
			arr[i] = end - i;
	else
		while (++i + end <= start)
			arr[i] = end + i;
	return (arr);
}
