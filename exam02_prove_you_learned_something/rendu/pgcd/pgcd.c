/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 20:50:29 by exam              #+#    #+#             */
/*   Updated: 2016/08/19 21:05:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		end(){
	printf("\n");
	return (0);
}

int		find_lowest(int a, int b){
	if (a < b)
		return (a);
	else
		return (b);
}

int		main(int ac, char **av){
	if (ac != 3)
		return (end());
	int a = atoi(av[1]);
	int b = atoi(av[2]);
	if (a <= 0 || b <= 0)
		return (end());
	int i = 1;
	int lowest = find_lowest(a, b);
	int gcd = 1;
	while (++i <= lowest)
		if (!(a % i) && !(b % i))
			gcd = i;
	printf("%d", gcd);
	return (end());
}
