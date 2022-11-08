/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:54:09 by dferjul           #+#    #+#             */
/*   Updated: 2022/11/07 17:59:55 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
int	main(void)
{
	printf("%d", ft_putstr_fd("blablaablabla"));
	return 0;
}
