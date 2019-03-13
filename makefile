# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/09 11:03:36 by vlecoq-v          #+#    #+#              #
#    Updated: 2019/03/13 14:23:15 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_NAME =	ft_memset.c						\
		ft_bzero.c							\
		ft_memcpy.c							\
		ft_memccpy.c						\
		ft_memmove.c						\
		ft_memchr.c							\
		ft_memcmp.c							\
		ft_strlen.c							\
		ft_strdup.c							\
		ft_strcpy.c							\
		ft_strncpy.c						\
		ft_strcat.c							\
		ft_strncat.c						\
		ft_strlcat.c						\
		ft_strchr.c							\
		ft_strrchr.c						\
		ft_strstr.c							\
		ft_strnstr.c						\
		ft_strcmp.c							\
		ft_strncmp.c						\
		ft_atoi.c							\
		ft_isalpha.c						\
		ft_isdigit.c						\
		ft_isalnum.c						\
		ft_isascii.c						\
		ft_isprint.c						\
		ft_toupper.c						\
		ft_tolower.c						\
		ft_memalloc.c						\
		ft_memdel.c							\
		ft_strnew.c							\
		ft_strdel.c							\
		ft_strclr.c							\
		ft_striter.c						\
		ft_striteri.c						\
		ft_strmap.c							\
		ft_strmapi.c						\
		ft_strequ.c							\
		ft_strnequ.c						\
		ft_strsub.c							\
		ft_strjoin.c						\
		ft_strtrim.c						\
		ft_strsplit.c						\
		ft_itoa.c							\
		ft_putchar.c						\
		ft_putstr.c							\
		ft_putendl.c						\
		ft_putnbr.c							\
		ft_putchar_fd.c						\
		ft_putstr_fd.c						\
		ft_putendl_fd.c						\
		ft_putnbr_fd.c						\
		ft_lstnew.c							\
		ft_lstdelone.c						\
		ft_lstdel.c							\
		ft_lstadd.c							\
		ft_lstiter.c						\
		ft_lstmap.c							\
		ft_printlist.c						\
		ft_ispositive.c						\
		ft_abs.c							\
		ft_strrev.c							\
		ft_lstaddend.c						\
		ft_lstlen.c							\
		ft_print_words_tab.c				\
		ft_swap.c							\
		ft_is_sort.c						\
		ft_sort_integer_table.c				\
		get_next_line.c						\
		ft_strjoin_free.c					\
		ft_cnt_rtrn.c						\
		ft_natoi.c							\
		ft_pwr.c							\
		ft_printf.c							\
		ft_check_flag_size.c				\
		ft_check_flag.c						\
		ft_check_type.c						\
		ft_conv_to_str.c					\
		ft_fill_flag.c						\
		ft_fill_prec.c						\
		ft_fill_size.c						\
		ft_fill_struct.c					\
		ft_fill_type.c						\
		ft_fill_width.c						\
		ft_fill_arg.c						\
		ft_itoa_b_u.c						\
		ft_itoa_b.c							\
		ft_print_conv.c						\
		ft_fill_prt_spc.c					\
		ft_print_str.c						\
		ft_prt_spc.c						\
		ft_print_flg.c						\
		ft_print_tp_c.c						\
		ft_print_tp_s.c						\
		ft_print_tp_d.c						\
		ft_type_conv.c 						\
		ft_reset_buff.c						\
		ft_add_to_buff.c					\
		ft_putbuff.c						\
		ft_flt_conv_str.c					\

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ_PATH = ./obj/
SRC_PATH = ./libft/

OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

AR = ar rc
CC = gcc

ifdef FLAGS
	ifeq ($(FLAGS), no)
		CFLAGS=
	endif
else
	CFLAGS	= -Wall -Wextra -Werror
endif

INCLUDE = -I ./libft
LIB = libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@ $(AR) $@ $(OBJ)
	@ ranlib $(NAME)
	@ echo "\x1B[32m--------------------> LIBFT.PRINTF PRETE <--------------------\n\x1B[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c ft_printf.h Makefile
	@ mkdir $(OBJ_PATH) 2> /dev/null || true
	@ $(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@ rm -f $(OBJ)
	@ echo "\x1B[31m-----------------> LIBFT.PRINTF RANGEE (.O) <-----------------\x1B[0m\n"
	@ rmdir $(OBJ_PATH) 2> /dev/null || true
	@ rm a.out 2> /dev/null || true
	@ echo "\x1B[33m---------------> LIBFT.PRINTF ORGANISEE FILES <---------------\x1B[0m\n"

fclean: clean
	 @ rm -f $(NAME)
	 @ rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re
