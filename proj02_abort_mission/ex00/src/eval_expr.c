/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 21:17:19 by pichrist          #+#    #+#             */
/*   Updated: 2016/08/20 23:19:07 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/functions.h"

char	*gen_prio(char *str)
{
	int i = -1;
	int count = 0;
	while (str[++i])
	{
		if (str[i] != ' ' && str[i] != '\n')
			count++;
	}
	char *prio = (char*)malloc(sizeof(char) * count);
	i = -1;
	while (++i < count)
		prio[i] = '\n' + '0';
	return (prio);
}

int		is_operator(char c, int parenthesis)
{
	if (parenthesis)
		return ((c == '+' || c == '-' || c == '*' || c == '/' || c == '%') 
			? 1 : 0);
	return ((c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || 
		c == '(' || c == ')') ? 1 : 0);
}

int		is_nbr(char c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

// int		calc(char *str, char *prio)
// {

// }

int		eval_expr(char *str)
{
	// str = "3+42*(1-2/(3+4)-1%21)+1";
	// prio ="66555433221111142222477":
	// prio= ".......................";

	int		i = -1;
	int		par_degree = 0;
	int		j;
	char	*prio = gen_prio(str);
	printf("str:%s\n", str);
	while (str[++i])
	{
		if (str[i] == '(')
		{
			// printf("attributing %c to %c\n", '0' + par_degree, str[i]);
			prio[i] = '0' + par_degree;
			par_degree++;
		}
		else if (str[i] == ')')
		{
			// printf("attributing %c to %c\n", '0' + par_degree, str[i]);
			par_degree--;
			prio[i] = '0' + par_degree;
		}
		else if (str[i] == '+' || str[i] == '-')
		{
			j = i - 1;
			printf("j:%d - %c\n", j, str[j]);
			while (--j > 0 && !is_operator(str[j], 1))
			{
				printf("j:%d - %c\n", j, str[j]);
				// printf("attributing %c to %c\n", '1' + par_degree, str[j]);
				prio[j] = '1' + par_degree;
			}
			j = i;
			while (str[++j] && !is_operator(str[j], 1))
			{
				// printf("attributing %c to %c\n", '1' + par_degree, str[j]);
				prio[j] = '1' + par_degree;
			}
		}
		else if (str[i] == '*' || str[i] == '/' || str[i] == '%')
		{
			j = i;
			while (--j > 0 && !is_operator(str[j], 1))
			{
				// printf("attributing %c to %c\n", '2' + par_degree, str[j]);
				prio[j] = '2' + par_degree;
			}
			j = i;
			while (str[++j] && !is_operator(str[j], 1))
			{
				// printf("attributing %c to %c\n", '2' + par_degree, str[j]);
				prio[j] = '2' + par_degree;
			}
		}
		// printf("%c - %d\n", str[i], prio[i] - '0');
	}
	// return (calc(str, prio));
	return (0);
}
