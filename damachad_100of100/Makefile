# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damachad <damachad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 08:29:51 by damachad          #+#    #+#              #
#    Updated: 2023/05/04 14:45:14 by damachad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

SRC = ft_printf.c ft_convert.c ft_putnbr_hex.c ft_putnbr_rec.c \
	  ft_putstr_2.c ft_putchar_2.c ft_putnbr_uphex.c ft_putnbr_unsig.c \
	  ft_put_add.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
