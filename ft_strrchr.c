/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:38:53 by dferjul           #+#    #+#             */
/*   Updated: 2022/11/14 12:51:57 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"
char    *ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while(s[i])
	{	
		if(c == s[i])
			return ((char *)s + i);
		i--;
	}
	return (0);
}

int main(void)
{
	printf("%s", ft_strrchr("abcdefgh", 'e'));
}
