/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:22:26 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/02 12:53:56 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (len > (size_t) ft_strlen(s))
		len = ft_strlen(s);
	s2 = (char *) malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (i < len && (start + (unsigned int)i < (unsigned int) ft_strlen(s)))
	{
		s2[i] = s[i + start];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
