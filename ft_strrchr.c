/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 04:27:00 by gchalifo          #+#    #+#             */
/*   Updated: 2023/02/22 04:54:56 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			j = i;
		i++;
	}
	if (s[i] == (char) c)
		j = i;
	if (j != -1)
		return (s + j);
	return (NULL);
}
