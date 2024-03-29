# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dferjul <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 13:40:08 by dferjul           #+#    #+#              #
#    Updated: 2023/01/19 21:08:40 by dferjul          ###   ########.fr        #
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

SRCS_BONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstclear.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \

OBJS	= 	$(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -rf

NAME	=	libft.a

#rules

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus : $(OBJS_BONUS)
		ar -rcs $(NAME) $(OBJS_BONUS)

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all, libft.a, clean, fclean, re, bonus
