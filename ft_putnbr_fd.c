/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:10:56 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/01 12:14:53 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nbrs[10];
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		j = -1;
	}
	while (n != 0)
	{
		nbrs[i] = (n % 10) * j;
		n /= 10;
		i++;
	}
	j = 0;
	while (j < i)
	{
		ft_putchar_fd(nbrs[i - j - 1] + 48, fd);
		j++;
	}
}
