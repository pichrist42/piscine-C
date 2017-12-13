/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   untitled                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichrist <pichrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 02:21:45 by pichrist          #+#    #+#             */
/*   Updated: 2016/08/12 02:22:07 by pichrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char *str)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (str[length])
		length++;
	while (str[i] && i < length - 1)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			str[i] = str[i + 1];
		i++;
	}
	i = 0;
	while (i < length)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			str[i] = '\0';
		i++;
	}
	return (str);
}
