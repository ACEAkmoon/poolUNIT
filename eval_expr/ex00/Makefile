# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akrushin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/13 12:37:24 by akrushin          #+#    #+#              #
#    Updated: 2017/08/13 12:37:26 by akrushin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc

RM		= rm -f

NAME 	= eval_expr

HEADER 	= header.h

SRC 	= main.c eval_expr.c lib_functs.c

OBJ 	= $(SRC:.c=.o)

CFLAGS 	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean :	
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
