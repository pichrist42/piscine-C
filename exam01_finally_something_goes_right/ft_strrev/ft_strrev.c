/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 18:20:59 by exam              #+#    #+#             */
/*   Updated: 2016/08/12 18:31:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	c;

	length = 0;
	i = 0;
	while (str[length])
		length++;
	length--;
	while (i < length / 2)
	{
		c = str[i];
		str[i] = str[length - i];
		str[length - i] = c;
		i++;
	}
	return (str);
}
