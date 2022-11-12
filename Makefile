# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dferjul <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 13:40:08 by dferjul           #+#    #+#              #
#    Updated: 2022/11/12 17:28:36 by dferjul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_strchr.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_bzero.c \

OBJS	= 	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -rf

NAME	=	libft.a

#rules

all : $(NAME)

$(NAME) : $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all $(NAME) clean fclean re
