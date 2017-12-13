/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 21:21:34 by pichrist          #+#    #+#             */
/*   Updated: 2016/08/20 22:54:27 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/functions.h"

int		do_atoi(char *str, int sign, int res)
{
	while (*str && !res && ((*str >= 9 && *str <= 13) || *str == ' '))
		str++;
	if (*str && !res && !sign && (*str == '+' || *str == '-'))
	{
		if (*str == '+')
			sign = 1;
		else
			sign = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (sign)
		res *= sign;
	return (res);
}

int		ft_atoi(char *str)
{
	return (do_atoi(str, 0, 0));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}
