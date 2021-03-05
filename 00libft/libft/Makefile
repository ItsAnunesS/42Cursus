# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/22 16:47:01 by anunes-d          #+#    #+#              #
#    Updated: 2021/03/05 04:29:10 by anunes-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

.PHONY: $(NAME) all clean fclean re

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
RM = rm -f
HDR = libft.h
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS) $(HDR)
	$(CC) $(CCFLAGS) -o $(NAME) $(SRCS) $(HDR)

.c.o:
	$(RM) $(OBJS) $(BONUS_O)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
