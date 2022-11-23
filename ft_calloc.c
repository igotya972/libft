/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:23:59 by dferjul           #+#    #+#             */
/*   Updated: 2022/11/22 00:47:36 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*c = malloc(15 * sizeof(char));
	int	i;

	i = 0;
	if (c == NULL)
		return (EXIT_FAILURE);
	while (i < 15)
		i++;
}
