/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:06:24 by dferjul           #+#    #+#             */
/*   Updated: 2023/01/20 04:49:52 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*new;

	if (!lst)
		return (0);
	new = f(lst);
	nlist = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = f(lst)))
		{
			(*del)(new->next);
			free(new);
			return (NULL);
		}
		new = new->next;
	}
	return (nlist);
}
