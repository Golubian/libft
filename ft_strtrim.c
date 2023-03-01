/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:48:58 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/01 12:03:00 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sstart;
	char	*send;

	if (!s1 || !set)
		return (NULL);
	sstart = s1;
	send = s1 + ft_strlen(s1) - 1;
	while (char_in_set(sstart[0], set) == 1 && sstart[0] != 0)
		sstart++;
	while (char_in_set(send[0], set) == 1 && send[0] != 0)
		send--;
	return (ft_substr(sstart, 0, send - sstart + 1));
}
