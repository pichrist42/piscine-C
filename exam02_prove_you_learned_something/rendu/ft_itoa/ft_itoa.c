/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 21:09:23 by exam              #+#    #+#             */
/*   Updated: 2016/08/19 21:33:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_length(int nbr){
	int i = 0;
	while (nbr /= 10)
		i++;
	return (i);
}

int		power(int nbr, int pow){
	int res = nbr;
	while (pow-- > 1)
		res *= nbr;
	return (res);
}

char	*ft_itoa(int nbr){
	char *str;
	int length = get_length(nbr);
	if (!(str = (char*)malloc(sizeof(char) * length)))
		return (0);
	int i = -1;
	while (length > 0){
		str[++i] = nbr/power(10, length) + '0';
		nbr %= power(10, length--);
	}
	str[++i] = nbr + '0';
	str[++i] = '\0';
	return (str);
}
