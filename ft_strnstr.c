/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:18:10 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/02 11:04:01 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		if (needle[j] == 0)
			return ((char *)&haystack[i - j]);
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (needle[j] == 0)
		return ((char *)&haystack[i - j]);
	return (NULL);
}
