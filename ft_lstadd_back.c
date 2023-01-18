/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:59:54 by dferjul           #+#    #+#             */
/*   Updated: 2023/01/18 14:59:14 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	new->next = *lst;
/*
    if(*lst == NULL)
        *lst = new;
    else
    {
        while(*lst->*next != NULL)
            lst = *lst->next;
        *lst->next = new;
    }
 */
}
