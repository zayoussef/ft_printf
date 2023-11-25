# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yozainan <yozainan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 09:44:18 by yozainan          #+#    #+#              #
#    Updated: 2023/11/25 13:14:42 by yozainan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar_pr.c ft_puthex_pr.c ft_putnbr_pr.c ft_putstr_pr.c ft_putuns_pr.c ft_isptr.c

OBJ = $(SRC:.c=.o)

CC	= cc

CFLAGS = -Wall -Wextra -Werror

.c.o : $(SRC)
	$(CC) $(CFLAGS) -c $^ -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all