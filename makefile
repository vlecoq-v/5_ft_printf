# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/09 11:03:36 by vlecoq-v          #+#    #+#              #
#    Updated: 2019/01/09 11:39:02 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)
PATH_OBJ = ./
PATH_SRC = ./

CC = ar rc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I ./
LIB = libft/libft.a



$(NAME): $(OBJ)
	make -C libft
	$(CC) $@ $(OBJ) $(LIB)
	ranlib $(NAME)

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re