# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maricarr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 18:55:39 by maricarr          #+#    #+#              #
#    Updated: 2022/09/14 20:49:04 by maricarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


###############################################################################
#VARIABLES
###############################################################################
NAME = libft.a
SRCS = %.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS += -Wall -Wextra -Werror
###############################################################################
#RULES
###############################################################################
all: $(NAME)

$(NAME): $(OBJS)
	ar rsc $(OBJS) $(NAME)

%.o: $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -c
###############################################################################
#PHONY RULES
###############################################################################
clean: 
	rm -f $(NAME) $(OBJS)
