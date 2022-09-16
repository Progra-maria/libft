# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maricarr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 18:55:39 by maricarr          #+#    #+#              #
#    Updated: 2022/09/16 13:08:48 by maricarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


###############################################################################
#VARIABLES
###############################################################################
NAME = libft.a
SRCS = ft_isalnum.c	ft_isdigit.c ft_strlen.c test.c /
	ft_isalpha.c ft_isprint.c ft_bzero.c ft_isascii.c ft_memset.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS += -Wall -Wextra -Werror
###############################################################################
#RULES
###############################################################################
all: $(NAME)

$(NAME): $(OBJS)
	ar rsc $(OBJS) $(NAME)

###############################################################################
#PHONY RULES
###############################################################################
clean: 
	rm -f $(NAME) $(OBJS)
