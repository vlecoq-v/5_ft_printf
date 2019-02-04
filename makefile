# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: morgani <morgani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/09 11:03:36 by vlecoq-v          #+#    #+#              #
#    Updated: 2019/02/04 13:04:32 by morgani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	libft/ft_memset.c					\
		libft/ft_bzero.c					\
		libft/ft_memcpy.c					\
		libft/ft_memccpy.c				\
		libft/ft_memmove.c				\
		libft/ft_memchr.c					\
		libft/ft_memcmp.c					\
		libft/ft_strlen.c					\
		libft/ft_strdup.c					\
		libft/ft_strcpy.c					\
		libft/ft_strncpy.c				\
		libft/ft_strcat.c					\
		libft/ft_strncat.c				\
		libft/ft_strlcat.c				\
		libft/ft_strchr.c					\
		libft/ft_strrchr.c				\
		libft/ft_strstr.c					\
		libft/ft_strnstr.c				\
		libft/ft_strcmp.c					\
		libft/ft_strncmp.c				\
		libft/ft_atoi.c					\
		libft/ft_isalpha.c				\
		libft/ft_isdigit.c				\
		libft/ft_isalnum.c				\
		libft/ft_isascii.c				\
		libft/ft_isprint.c				\
		libft/ft_toupper.c				\
		libft/ft_tolower.c				\
		libft/ft_memalloc.c				\
		libft/ft_memdel.c					\
		libft/ft_strnew.c					\
		libft/ft_strdel.c					\
		libft/ft_strclr.c					\
		libft/ft_striter.c				\
		libft/ft_striteri.c				\
		libft/ft_strmap.c					\
		libft/ft_strmapi.c				\
		libft/ft_strequ.c					\
		libft/ft_strnequ.c				\
		libft/ft_strsub.c					\
		libft/ft_strjoin.c				\
		libft/ft_strtrim.c				\
		libft/ft_strsplit.c				\
		libft/ft_itoa.c					\
		libft/ft_putchar.c				\
		libft/ft_putstr.c					\
		libft/ft_putendl.c				\
		libft/ft_putnbr.c					\
		libft/ft_putchar_fd.c				\
		libft/ft_putstr_fd.c				\
		libft/ft_putendl_fd.c				\
		libft/ft_putnbr_fd.c				\
		libft/ft_lstnew.c					\
		libft/ft_lstdelone.c				\
		libft/ft_lstdel.c					\
		libft/ft_lstadd.c					\
		libft/ft_lstiter.c				\
		libft/ft_lstmap.c					\
		libft/ft_printlist.c				\
		libft/ft_ispositive.c				\
		libft/ft_abs.c					\
		libft/ft_strrev.c					\
		libft/ft_lstaddend.c				\
		libft/ft_lstlen.c					\
		libft/ft_print_words_tab.c		\
		libft/ft_swap.c					\
		libft/ft_is_sort.c				\
		libft/ft_sort_integer_table.c		\
		libft/get_next_line.c				\
		libft/ft_strjoin_free.c			\
		libft/ft_cnt_rtrn.c				\
		libft/ft_natoi.c				\
		ft_printf.c				\
		ft_check_flag_size.c	\
		ft_check_flag.c			\
		ft_check_type.c			\
		ft_conv_to_str.c		\
		ft_fill_flag.c			\
		ft_fill_prec.c			\
		ft_fill_size.c			\
		ft_fill_struct.c		\
		ft_fill_type.c			\
		ft_fill_width.c			\
		ft_fill_arg.c			\
		ft_itoa_b_u.c			\
		ft_itoa_b.c				\
		ft_print_conv.c			\
		ft_fill_prt_spc.c		\
		ft_print_str.c			\
		ft_prt_spc.c			\
		ft_print_flg.c			\
		ft_print_tp_c.c			\
		ft_print_tp_s.c			\
		ft_print_tp_d.c			\
		ft_type_conv.c 			\
		ft_reset_buff.c			\
		ft_add_to_buff.c		\
		ft_putbuff.c			\
		ft_prt_strct.c

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
	@ $(AR) $@ $(OBJ)
	@ ranlib $(NAME)
	@ echo "-----------------> LIBFT.PRINTF PRETE <-----------------\n"

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

val:
	gcc -o val.out  $(CFLAGS) val_main.c $(NAME)

clean:
	@ rm -f $(OBJ)
	@ make clean -C libft
	@ echo "---------------> LIBFT.PRINTF RANGEE (.O) <---------------\n"

fclean: clean
	@ rm -f $(NAME)
	@ rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re

