/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchalifo <gchalifo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:49:24 by gchalifo          #+#    #+#             */
/*   Updated: 2023/03/02 12:48:11 by gchalifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstfirst;
	t_list	*lstnew;
	void	*bf;

	if (!f || !lst)
		return (NULL);
	while (lst != NULL)
	{
		bf = f(lst->content);
		lstnew = ft_lstnew(bf);
		if (!lstnew)
		{
			ft_lstclear(&lstfirst, del);
			free(lstfirst);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&lstfirst, lstnew);
		lst = lst->next;
	}
	return (lstfirst);
}
