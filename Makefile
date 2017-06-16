# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile2                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/16 05:05:10 by amehmeto          #+#    #+#              #
#    Updated: 2017/06/16 07:45:24 by amehmeto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re 

NAME = libftprintf.a
SRC_DIR = src/
OBJ_DIR = obj/
FILE = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memdup.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_islower.c \
	   ft_isupper.c \
	   ft_isprint.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strjoin_u.c \
	   ft_strtrim.c \
	   ft_strsplit.c \
	   ft_itoa.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putendl.c \
	   ft_putnbr.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_remws.c \
	   ft_nbdigits.c \
	   ft_isnegative.c \
	   ft_ispositive.c \
	   ft_strtoupper.c \
	   ft_printf.c \
	   ft_conv_s.c \
	   ft_conv_p.c \
	   ft_conv_d.c \
	   ft_conv_o.c \

OBJ = $(addprefix $(OBJ_DIR), $(FILE:.c=.o))
CC = gcc
FLAGS = -Weverything -g 

GREEN = \033[32m
NO_COLOR = \033[0m

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@printf "$(GREEN) [Object archiving done] \n$(NO_COLOR)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@printf "$(GREEN) \r \t Compiling \t $< \t to $@\r$(NO_COLOR)"
	@$(CC) $(FLAGS) -o $@ -c $< 

$(OBJ_DIR):
	mkdir obj

clean:
	@rm -rf $(OBJ)
	@printf "$(GREEN) [Objects clean done] \n $(NO_COLOR)"
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
