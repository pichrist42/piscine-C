/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 19:04:47 by exam              #+#    #+#             */
/*   Updated: 2016/08/12 19:29:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

int		ft_sub(char **argv)
{
	int i;
	int j;
	int check;

	i = 0;
	j = 0;
	check = 0;
	while (argv[1][i])
	{
		while (argv[2][j] && argv[2][j] != argv[1][i])
			j++;
		if (argv[2][j] == argv[1][i])
			check++;
		i++;
	}
	return (check);
}

int		main(int argc, char **argv)
{
	int len;

	if (argc == 3)
	{
		len = ft_strlen(argv[1]);
		if (len == ft_sub(argv))
			ft_putstr(argv[1]);
	}
	ft_putstr("\n");
	return (0);
}
