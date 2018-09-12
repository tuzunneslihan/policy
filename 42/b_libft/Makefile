# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntuzun <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 13:12:30 by ntuzun            #+#    #+#              #
#    Updated: 2018/09/11 13:16:55 by ntuzun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAG = -c -Wall -Werror -Wextra

SRC_NAME = ft_memset.c\
		   ft_strlen.c \
		   ft_strdup.c \
		   ft_strcpy.c \
		   ft_strncpy.c \
		   ft_strchr.c \
		   ft_isdigit.c \
		   ft_toupper.c \
		   ft_tolower.c \
		   ft_strcmp.c

OBJ_NAME = $(SRC_NAME:.c=.o)
	AR = ar rc
	RLIB = ranlib
	HDR = -I libft.h
	RM = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAG) $(SRC_NAME)
	$(AR) $(NAME) $(OBJ_NAME)
	$(RLIB) $(NAME)

clean:
	$(RM) $(OBJ_NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all
