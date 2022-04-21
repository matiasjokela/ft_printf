# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjokela <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/21 08:56:39 by mjokela           #+#    #+#              #
#    Updated: 2022/04/21 08:56:42 by mjokela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC_DIR = ./srcs/
SRC_FILES = checking_and_dispatching.c ft_printf.c \
little_helpers.c print_char.c print_float.c print_hex.c print_int.c \
print_modulo.c print_octal.c print_pointer.c print_string.c \
print_uint.c reading.c
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))

HEADER = ./includes/ft_printf.h
O_FILES = $(SRC_FILES:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@cd ./libft/ && $(MAKE) && cd ..;
	@cp ./libft/libft.a ./$(NAME);
	@gcc -c -Wall -Werror -Wextra $(HEADER) $(SRCS);
	@ar rc $(NAME) $(O_FILES);
	@mv $(O_FILES) $(SRC_DIR)
	@ranlib $(NAME);

clean:
	@cd ./libft/ && $(MAKE) clean && cd ..;
	@cd ./srcs/ && rm -f $(O_FILES) && cd ..;
	@rm -f ./srcs/$(O_FILES) ./includes/ft_printf.h.gch;
	

fclean:
	@cd ./libft/ && $(MAKE) fclean && cd ..;
	@cd ./srcs/ && rm -f $(O_FILES) && cd ..;
	@rm -f $(NAME) ./includes/ft_printf.h.gch;

re: fclean all
