/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:23:40 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/01 11:45:25 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (dstsize < len + 1)
		return (ft_strlen(src) + dstsize);
	while (i < (dstsize - len) - 1 && src[i] != 0)
	{
		dst[i + len] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i + len] = 0;
	return (len + ft_strlen(src));
}
