/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 19:36:07 by exam              #+#    #+#             */
/*   Updated: 2016/08/12 20:52:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *s)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (s[i])
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res);
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

void	ft_printnbr(int i)
{
	int power;
	int disp;

	power = 1;
	while (i / power > 9)
		power *= 10;
	while (power)
	{
		disp = i / power % 10 + '0';
		write(1, &disp, 1);
		power /= 10;
	}
}

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 1;
		while (i < 10)
		{
			ft_printnbr(i);
			ft_putstr(" x ");
			ft_putstr(argv[1]);
			ft_putstr(" = ");
			ft_printnbr(i*ft_atoi(argv[1]));
			ft_putstr("\n");
			i++;
		}
	}
	else
		ft_putstr("\n");
	return (0);
}
