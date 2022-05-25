# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 19:01:59 by mcarniel          #+#    #+#              #
#    Updated: 2022/05/24 21:27:08 by mcarniel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

CC =		gcc
CFLAGS =	-Wall -Wextra -Werror

SRCS =		./src/ft_printf.c \
			./aux_functions/ft_calloc.c \
			./aux_functions/ft_dectohex.c \
			./aux_functions/ft_hexalen.c \
			./aux_functions/ft_putchar.c \
			./aux_functions/ft_putnbr.c \
			./aux_functions/ft_putstr.c \
			./aux_functions/ft_putstrhexa.c \

OBJS =		$(SRCS:%.c=%.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re