/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:36:27 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/01 09:16:43 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*adr;
	int		i;

	if (!dst || !src)
		return (NULL);
	adr = dst;
	i = 1;
	if (src < dst)
	{
		i = -1;
		src += len - 1;
		dst += len - 1;
	}
	while (len-- > 0)
	{
		*(char *) dst = *(char *) src;
		dst += i;
		src += i;
	}
	return (adr);
}
