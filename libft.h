/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dferjul <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:25:11 by dferjul           #+#    #+#             */
/*   Updated: 2022/11/11 11:16:51 by dferjul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);

#endif
