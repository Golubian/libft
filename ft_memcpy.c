/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:13:44 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/02 11:02:14 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*strdst;
	char		*strsrc;
	int			i;

	if (!dst || !src)
		return (NULL);
	strdst = (char *) dst;
	strsrc = (char *) src;
	i = 0;
	while ((size_t) i < n)
	{
		strdst[i] = strsrc[i];
		i++;
	}
	return (strdst);
}
