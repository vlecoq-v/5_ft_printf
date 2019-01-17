# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: morgani <morgani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/09 11:03:36 by vlecoq-v          #+#    #+#              #
#    Updated: 2019/01/17 14:00:08 by morgani          ###   ########.fr        #
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
		ft_fill_arg.c			\
		ft_int.c				\
		ft_itoa_b_u.c			\
		ft_itoa_b.c				\
		ft_print_conv.c			\
		ft_fill_prt_spc.c		\
		ft_print_str.c			\
		ft_prt_spc.c			\
		ft_print_tp_c.c			\
		ft_print_tp_s.c			\
		ft_print_tp_d.c			\
		ft_type_conv.c 			\
		ft_reset_buff.c			\
		ft_add_to_buff.c		\
		ft_putbuff.c



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
	gcc $(CFLAGS) -o max.out max_main.c $(LIB) $(NAME)
	gcc $(CFLAGS) -o val.out  val_main.c $(LIB) $(NAME)
	@ echo "-----------------> LIBFT.PRINTF PRETE <-----------------\n"

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

max:
	gcc -o max.out max_main.c $(LIB) $(NAME)

clean:
	@ rm -f $(OBJ)
	@ make clean -C libft
	@ echo "---------------> LIBFT.PRINTF RANGEE (.O) <---------------\n"

fclean: clean
	@ rm -f $(NAME)
	@ rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re