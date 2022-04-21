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
SRCS = checking_and_dispatching.c ft_printf.c little_helpers.c print_char.c \
print_float.c print_hex.c print_int.c print_modulo.c print_octal.c \
print_pointer.c print_string.c print_uint.c reading.c

HEADER = ft_printf.h
LIBFT = libft/libft.a
O_FILES = $(SRCS:.c=.o)
LIBFT_O_FILES = $(wildcard libft/*.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	cd ./libft/ && $(MAKE) && cd ..
	gcc -c -Wall -Werror -Wextra $(HEADER) $(SRCS);
	ar rc $(NAME) $(O_FILES) $(LIBFT_O_FILES);
	ranlib $(NAME);

clean:
	cd ./libft/ && $(MAKE) clean && cd ..
	rm -f $(O_FILES)  ft_printf.h.gch;
	

fclean:
	cd ./libft/ && $(MAKE) fclean && cd ..
	rm -f $(O_FILES) $(NAME) ft_printf.h.gch;

re: fclean all
