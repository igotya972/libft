# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dferjul <dferjul@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 13:40:08 by dferjul           #+#    #+#              #
#    Updated: 2023/01/10 19:47:36 by dferjul          ###   ########.fr        #
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
			ft_memcpy.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_atoi.c	\
			ft_memmove.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_striteri.c \
			ft_strdup.c \
			ft_strnstr.c \
			ft_memchr.c \
			ft_calloc.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_itoa.c \
			ft_split.c \
			ft_strtrim.c \
			ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstclear \

OBJS	= 	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -rf

NAME	=	libft.a

#rules

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all, libft.a, clean, fclean, re
