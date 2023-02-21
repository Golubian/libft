/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:17:33 by gchalifo          #+#    #+#             */
/*   Updated: 2023/02/20 20:39:25 by gchalifo         ###   ########.fr       */
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
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	total;
	int	sign;
	int	sign_is_set;
	int	i;

	i = 0;
	sign = 1;
	sign_is_set = 0;
	while (str[i] != '\0' && ft_isdigit(str[i]) == 1)
	{
		total *= 10;
		total += sign * ((str[i] - 48) % 10);
		i++;
	}
	return (total);
}
