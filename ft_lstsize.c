/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:53:02 by dferjul           #+#    #+#             */
/*   Updated: 2023/01/10 19:01:16 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstize(t_list *lst)
{
	int	len;

    len = 0;
    if(!lst)
        return len;
    
    while(len != 0)
    {
        ++len;
        lst = lst->next;
    }
    return len;
}
