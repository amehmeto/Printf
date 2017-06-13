# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 02:44:46 by amehmeto          #+#    #+#              #
#    Updated: 2017/06/13 19:58:59 by amehmeto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re 

NAME = libftprintf.a
SRC_DIR = src/
FILE = $(SRC_DIR)ft_printf.c \
		$(SRC_DIR)ft_conv_s.c \

OBJ = $(FILE:.c=.o)
CC = gcc
FLAGS = -Weverything -g

all: $(NAME)

$(NAME): $(OBJ)
	make -C Libft
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "\033[32mcompilation OK\033[0m"

%.o: $(SRC_DIR)%.c
	$(CC) -c $< $(FLAGS)
	mv $(OBJ) $(SRC_DIR)

clean:
	make clean -C Libft/
	rm -rf $(OBJ)
	@echo "\033[32mclean objets OK\033[0m"

fclean: clean
	rm -rf $(NAME)

re: fclean all
