/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:21:15 by dferjul           #+#    #+#             */
/*   Updated: 2022/11/20 20:12:05 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	i = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	while (s[i] && i < len)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (dst);
}
