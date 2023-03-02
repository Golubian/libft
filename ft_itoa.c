/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:56:49 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/02 09:34:22 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	il(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*get_zero_string(void)
{
	char	*str;

	str = malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		s;
	int		i;

	if (n == 0)
		return (get_zero_string());
	i = 1;
	s = 1;
	str = (char *)malloc(sizeof(char) * (il(n) + 1));
	if (!str)
		return (NULL);
	str[il(n)] = 0;
	if (n < 0)
	{
		s = -1;
		str[0] = '-';
	}
	while (n != 0)
	{
		str[il(n) - i] = '0' + (s * (n % (s * 10)));
		n /= 10;
	}
	return (str);
}
