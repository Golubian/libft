/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:17:33 by gchalifo          #+#    #+#             */
/*   Updated: 2023/02/22 04:24:02 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	char	s[6];
	int		i;

	i = 0;
	s[0] = '\t';
	s[1] = '\n';
	s[2] = '\v';
	s[3] = '\f';
	s[4] = '\r';
	s[5] = ' ';
	while (i < 6)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_getsign(char c)
{
	if (c == '-')
		return (-1);
	else if (c == '+')
		return (1);
	else if (ft_isspace(c) == 1)
		return (0);
	else
		return (-2);
}

int	ft_atoi(const char *str)
{
	int	total;
	int	sign;
	int	i;

	i = 0;
	sign = 0;
	total = 0;
	while (str[i] != '\0' && ft_isdigit(str[i]) != 1 && sign == 0)
	{
		sign = ft_getsign(str[i]);
		if (sign == -2)
			return (0);
		i++;
	}
	if (sign == 0)
		sign = 1;
	while (str[i] != '\0' && ft_isdigit(str[i]) == 1)
	{
		total *= 10;
		total += sign * ((str[i] - 48) % 10);
		i++;
	}
	return (total);
}
