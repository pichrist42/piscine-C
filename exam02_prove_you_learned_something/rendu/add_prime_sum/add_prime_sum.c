/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 19:31:08 by exam              #+#    #+#             */
/*   Updated: 2016/08/19 20:15:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_prime(int nb)
{
	int i = 2;
	while (i < nb && nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	else
		return (0);
}

int		main(int ac, char **av)
{
	int tmp;
	int res;
	int i;
	int nb;

	if (ac != 2 || av[1][0] == '-')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	nb = 0;
	i = -1;
	while (av[1][++i])
		nb = nb * 10 + av[1][i] - '0';
	i = 1;
	res = 0;
	while (++i <= nb)
		if (is_prime(i))
			res += i;
	tmp = res;
	i = 0;
	while (tmp / 10)
	{
		tmp /= 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(res / (i*10) + '0');
		res %= i*10;
		i--;
	}
	ft_putchar(res + '0');
	ft_putchar('\n');
	return (0);
}
