/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 21:14:07 by pichrist          #+#    #+#             */
/*   Updated: 2016/08/20 23:05:03 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/functions.h"

int main(int ac, char **av)
{
	if (ac > 1)
	{
		eval_expr(av[1]);
		// ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}