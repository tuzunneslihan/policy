# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntuzun <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/25 18:52:03 by ntuzun            #+#    #+#              #
#    Updated: 2018/09/25 18:52:49 by ntuzun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -c -Werror -Wextra -Wall
SRC = b_printf.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_putnbr_base.c\
	  ft_putdigit.c

OUT = $(SRC:.c=.o)

$(NAME):
	gcc $(FLAGS) $(SRC)
	ar -rcs $(NAME) $(OUT)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
