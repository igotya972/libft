/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:04:37 by dferjul           #+#    #+#             */
/*   Updated: 2022/11/26 03:21:47 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit(int n)
{
	int digit;
	int i;

	digit = 0;
	while (i > 0) 
	{
		i = n / 10;
		digit++; 
	}
	return (digit)
}

	ft_positif(int n)
{
	char 	*s;
	int	i;
	int	j;
	i = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			s[i] = n / 

char	*ft_itoa(int n)
{
	char	*str;
	int	i;


	
}
