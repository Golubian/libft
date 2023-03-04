/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:35:13 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/02 12:50:24 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int		i;
	int		st;
	int		rt;

	i = 0;
	st = -1;
	rt = 0;
	while (s[i] != 0)
	{
		if (s[i] == c && st != -1)
		{
			st = -1;
			rt += 1;
		}
		else if (s[i] != c && st == -1)
			st = i;
		i++;
	}
	if (st != -1)
		rt++;
	return (rt);
}

char	**ft_split(char const *s, char c)
{
	char	**rt;
	int		i;
	int		wct;
	int		st;

	i = 0;
	wct = 0;
	st = -1;
	rt = malloc(sizeof(char *) * count_words(s, c));
	if (!rt)
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] == c && st != -1)
		{
			rt[wct++] = ft_substr(s, st, i - st);
			st = -1;
		}
		else if (s[i] != c && st == -1)
			st = i;
		i++;
	}
	if (st != -1)
		rt[wct++] = ft_substr(s, st, i - st);
	return (rt);
}
