/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:34:11 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/02 11:46:10 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_del;
	t_list	*nxt;

	if (!lst)
		return ;
	if (!*lst)
		return ;
	nxt = *lst;
	while (nxt->next != NULL)
	{
		to_del = nxt;
		nxt = nxt->next;
		if (del)
			del(to_del->content);
		free(to_del);
	}
	if (del)
		del(nxt->content);
	free(nxt);
	*lst = NULL;
}
