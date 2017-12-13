/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 19:15:05 by exam              #+#    #+#             */
/*   Updated: 2016/08/19 19:29:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int c_src;
	int c_dest;
	int again;
	int check;

	c_src = -1;
	if (ac == 3)
	{
		while (av[1][++c_src])
		{
			c_dest = -1;
			again = 1;
			check = -1;
			while (av[1][++check] != av[1][c_src] && check < c_src)
				;
			if (check == c_src)
				while (av[2][++c_dest] && again)
					if (av[1][c_src] == av[2][c_dest])
					{
						ft_putchar(av[1][c_src]);
						again = 0;
					}
		}
	}
	ft_putchar('\n');
	return (0);
}
