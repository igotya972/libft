/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:49:07 by dferjul           #+#    #+#             */
/*   Updated: 2023/01/18 14:53:07 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmpnext;

	tmp = *lst;
	while (tmp != NULL)
	{
		tmpnext = tmp->next;
		tmp = tmpnext;
		(*del)(tmp);
		free(tmp);
	}
}
