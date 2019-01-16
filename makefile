# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/09 11:03:36 by vlecoq-v          #+#    #+#              #
#    Updated: 2019/01/16 17:21:36 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c				\
		ft_check_flag_size.c	\
		ft_check_flag.c			\
		ft_check_type.c			\
		ft_check.c				\
		ft_conv_to_str.c		\
		ft_fill_flag.c			\
		ft_fill_prec.c			\
		ft_fill_size.c			\
		ft_fill_struct.c		\
		ft_fill_type.c			\
		ft_fill_width.c			\
		ft_int.c				\
		ft_itoa_b_u.c			\
		ft_itoa_b.c				\
		ft_print_conv.c			\
		ft_type_conv.c \
		val_main.c


OBJ = $(SRC:.c=.o)
PATH_OBJ = ./
PATH_SRC = ./

AR = ar rc
CC = gcc

ifdef FLAGS
    ifeq ($(FLAGS), no)
        CFLAGS=
    endif
else
    CFLAGS      = -Wall -Wextra -Werror
endif

INCLUDE = -I ./
LIB = libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@ make -C libft
	@ $(AR) $@ $(OBJ) $(LIB)
	@ ranlib $(NAME)
	gcc $(CFLAGS) max_main.c $(LIB) $(NAME)
	gcc $(CFLAGS) -o val.out  $(LIB) $(NAME)
	@ echo "-----------------> LIBFT.PRINTF PRETE <-----------------\n"

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@ rm -f $(OBJ)
	@ make clean -C libft
	@ echo "---------------> LIBFT.PRINTF RANGEE (.O) <---------------\n"

fclean: clean
	@ rm -f $(NAME)
	@ rm -f libft/libft.a
	@ rm a.out

re: fclean all

.PHONY: all clean fclean re