# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 19:34:44 by ielmoudn          #+#    #+#              #
#    Updated: 2018/10/30 00:23:39 by ielmoudn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

HEADS = libft.h

FLAGS = -Wall -Wextra -Werror

all:  $(NAME)

$(NAME) : 
		gcc $(FLAGS) -c $(SRCS) $(HEADS)
			ar rc $(NAME) *.o

clean :
		rm -f *.o

fclean : clean
		rm -f  $(NAME)

re : fclean all