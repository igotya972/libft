/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:08:28 by dferjul           #+#    #+#             */
/*   Updated: 2022/11/12 15:09:06 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
	{
		str[n] = '0';
	}
}
