# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 15:34:56 by mcarneir          #+#    #+#              #
#    Updated: 2023/05/02 17:31:21 by mcarneir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFLAGS = -Wall -Wextra -Werror

CC = cc

NAME = libftprintf.a

RM = rm -f

MDT = 	ft_puts.c \
	ft_putnbr_dec.c \
	ft_putnbr_u.c \
	ft_putnbr_hex.c \
	ft_printptr.c \
	ft_printf.c \

OBJS_MDT = $(MDT:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_MDT)
		ar rc $(NAME) $(OBJS_MDT)

clean: 
		$(RM) $(OBJS_MDT)

fclean: clean 
		$(RM) $(NAME)

re: 	fclean $(NAME)
