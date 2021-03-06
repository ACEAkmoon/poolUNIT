# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akrushin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/02 20:50:55 by akrushin          #+#    #+#              #
#    Updated: 2017/08/02 20:50:59 by akrushin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c && ar rc libft.a *.o && ranlib libft.a 
/////////////////
gcc -Werror -Wall -Wextra -c ft_*.c
ar rc libft.a ft_*.o
ranlib libft.a
find . -name "*.o" -delete
