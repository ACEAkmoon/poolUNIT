# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akrushin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/08 20:03:28 by akrushin          #+#    #+#              #
#    Updated: 2017/08/08 20:03:30 by akrushin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = do-op

SRC = error.c ft_atoi.c main.c operation.c print.c 

HEADER = header.h

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(HEADER)
	ar rc $(NAME) error.c ft_atoi.c main.c operation.c print.c header.h
	ranlib $(NAME)

clean:
	/bin/rm -f error.c ft_atoi.c main.c operation.c print.c header.h

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
