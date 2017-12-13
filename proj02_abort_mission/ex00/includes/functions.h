/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 21:14:49 by pichrist          #+#    #+#             */
/*   Updated: 2016/08/20 22:57:32 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		do_atoi(char *str, int sign, int res);
int		ft_atoi(char *str);
char	*gen_prio(char *str);
int		is_operator(char c, int parenthesis);
int		is_nbr(char c);
int		calculate_pow(int nb, int power, int res);
void	display_number(int nb);
void	ft_putnbr(int nb);
int		eval_expr(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
#endif