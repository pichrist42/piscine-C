/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 18:03:15 by exam              #+#    #+#             */
/*   Updated: 2016/08/12 18:07:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}