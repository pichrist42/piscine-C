/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_gen_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 22:55:59 by pichrist          #+#    #+#             */
/*   Updated: 2016/08/20 22:56:16 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/functions.h"

int		calculate_pow(int nb, int power, int res)
{
	if (power > 0)
	{
		res *= nb;
		res = calculate_pow(nb, power - 1, res);
	}
	return (res);
}

void	display_number(int nb)
{
	int tmp;
	int i;

	tmp = nb;
	i = 0;
	while (tmp > 0)
	{
		tmp /= 10;
		i++;
	}
	while (i--)
	{
		ft_putchar(nb / calculate_pow(10, i, 1) + '0');
		nb %= calculate_pow(10, i, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar('0');
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		display_number(214748);
		display_number(3648);
	}
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		display_number(nb);
	}
}
