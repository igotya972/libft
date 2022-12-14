/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:56:45 by dferjul           #+#    #+#             */
/*   Updated: 2023/01/10 20:21:25 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{

    t_list *content = malloc(sizeof(t_list));
    if(!content)
        return NULL;
    

    return content;
}