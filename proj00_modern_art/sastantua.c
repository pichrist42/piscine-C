/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 15:27:19 by pichrist          #+#    #+#             */
/*   Updated: 2016/08/07 23:02:25 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c){printf("%c", c);}

int		display_spaces(int line_length, int max_length){
	int space = 0;
	while (space*2+line_length < max_length)
		space++;
	while (space--)
		ft_putchar(' ');
	ft_putchar('/');
	return (space);
}

void	will_it_door(int *tab){
	int door_size = (tab[0]%2) ? tab[0] : tab[0]-1;
	int char_w;
	char_w = display_spaces(tab[5], tab[6]);
	if(tab[4] > tab[2]-door_size && tab[1] == tab[0]){
		int stars;
		stars = tab[5]/2 - door_size;
		// printf("char %d - %d\n", char_w, tab[5] - 3);
		while (char_w < tab[5] - 3){
			if(char_w >= stars-door_size && char_w <= tab[5]-)
				ft_putchar('|');
			else
				ft_putchar('*');
			char_w++;
		}
	}else{
		while (char_w < tab[5] - 3){
				ft_putchar('*');
			char_w++;
		}
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	prepare(int size, int max_length, int line_nb, int line_length){
	int tab[8];
	tab[0] = size;
	tab[1] = 1; // actual block nb
	tab[2] = 3; // in prev block nb line
	tab[3] = 1; // length of prev line
	tab[4] = line_nb;
	tab[5] = line_length;
	tab[6] = max_length;
	tab[7] = 1; // length_increment_floor

	while (tab[1] <= tab[0])
	{
		tab[4] = 1;
		while(tab[4] <= tab[2])
		{
			tab[5] = tab[3] + 2;
			if (tab[6] != 0)
				will_it_door(tab);
			tab[4]++;
			tab[3] = tab[5];
		}
		if (tab[1] != tab[0]){
			tab[2]++;
			if (tab[1] % 2)
				tab[7] += 1;
			tab[3] += tab[7]*2;
		}
		tab[1]++;
	}
	if(tab[6] == 0)
		prepare(tab[0], tab[3], tab[4], tab[5]);
}

void	sastantua(int size){
	prepare(size, 0, 0, 0);
}

int		main(int argc, char const *argv[]){
	if(argc == 2){
			int a = atoi(argv[1]);
			sastantua(a);
	}else
		printf("Please enter a number as an input after the program execution command.\n");
}