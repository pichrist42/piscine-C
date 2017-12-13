/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 20:54:16 by exam              #+#    #+#             */
/*   Updated: 2016/08/12 21:13:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nb)
{
	char	*str;
	int		length;
	int		power;
	int		i;

	power = 1;
	length = 1;
	while (nb / power > 9)
	{
		power *= 10;
		length++;
	}
	length++;
	str = (char*)malloc(sizeof(char) * length);
	if (str == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		str[i] = nb / power % 10 + '0';
		power /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
