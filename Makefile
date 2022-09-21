# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maricarr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 18:55:39 by maricarr          #+#    #+#              #
#    Updated: 2022/09/21 23:37:20 by maricarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


###############################################################################
#VARIABLES
###############################################################################
NAME = libft.a
SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c	\
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_memcmp.c \
	   ft_strrchr.c

OBJS = $(SRCS:.c=.o)
HDRS = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror
###############################################################################
#RULES
###############################################################################
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) -c $(CFLAGS) $?
###############################################################################
#PHONY RULES
###############################################################################
clean: 
	rm -f $(NAME) $(OBJS)
fclean: clean
		rm -f $(NAME)
re: fclean all
	
.PHONY: all clean fclean re
