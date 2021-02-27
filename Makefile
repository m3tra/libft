# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fporto <fporto-@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/26 13:26:30 by fporto            #+#    #+#              #
#    Updated: 2021/02/27 17:35:25 by fporto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEAD = libft.h
NAME = libft.a
RM = rm -f
AR = ar rcs
SO = libft.so

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_memmove.c \
		ft_strncmp.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_strlcpy.c \
		ft_strrchr.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_toupper.c \
		ft_tolower.c \
		\
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BONUS:.c=.o)

.c.o : $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I.

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all:	$(NAME)

bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: clean fclean re all bonus
