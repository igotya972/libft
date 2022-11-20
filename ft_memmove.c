/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:21:15 by dferjul           #+#    #+#             */
/*   Updated: 2022/11/20 18:14:01 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	i = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	if (s < d)
	{
		while (i--)
			d[len] = s[len];
	}
	else
		while (i < len)
			d++ = s++;
	return (dst);
}
