/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:54:29 by dferjul           #+#    #+#             */
/*   Updated: 2022/11/15 19:21:28 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *) str);
		str++;
	}
	return (0);
}
