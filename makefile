# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/09 11:03:36 by vlecoq-v          #+#    #+#              #
#    Updated: 2019/02/28 16:17:34 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_NAME =	$(LIB_PATH)ft_memset.c					\
		$(LIB_PATH)ft_bzero.c					\
		$(LIB_PATH)ft_memcpy.c					\
		$(LIB_PATH)ft_memccpy.c					\
		$(LIB_PATH)ft_memmove.c					\
		$(LIB_PATH)ft_memchr.c					\
		$(LIB_PATH)ft_memcmp.c					\
		$(LIB_PATH)ft_strlen.c					\
		$(LIB_PATH)ft_strdup.c					\
		$(LIB_PATH)ft_strcpy.c					\
		$(LIB_PATH)ft_strncpy.c				\
		$(LIB_PATH)ft_strcat.c					\
		$(LIB_PATH)ft_strncat.c					\
		$(LIB_PATH)ft_strlcat.c					\
		$(LIB_PATH)ft_strchr.c					\
		$(LIB_PATH)ft_strrchr.c				\
		$(LIB_PATH)ft_strstr.c					\
		$(LIB_PATH)ft_strnstr.c				\
		$(LIB_PATH)ft_strcmp.c					\
		$(LIB_PATH)ft_strncmp.c					\
		$(LIB_PATH)ft_atoi.c						\
		$(LIB_PATH)ft_isalpha.c					\
		$(LIB_PATH)ft_isdigit.c					\
		$(LIB_PATH)ft_isalnum.c					\
		$(LIB_PATH)ft_isascii.c					\
		$(LIB_PATH)ft_isprint.c					\
		$(LIB_PATH)ft_toupper.c					\
		$(LIB_PATH)ft_tolower.c					\
		$(LIB_PATH)ft_memalloc.c					\
		$(LIB_PATH)ft_memdel.c					\
		$(LIB_PATH)ft_strnew.c					\
		$(LIB_PATH)ft_strdel.c					\
		$(LIB_PATH)ft_strclr.c					\
		$(LIB_PATH)ft_striter.c					\
		$(LIB_PATH)ft_striteri.c					\
		$(LIB_PATH)ft_strmap.c					\
		$(LIB_PATH)ft_strmapi.c				\
		$(LIB_PATH)ft_strequ.c					\
		$(LIB_PATH)ft_strnequ.c				\
		$(LIB_PATH)ft_strsub.c					\
		$(LIB_PATH)ft_strjoin.c					\
		$(LIB_PATH)ft_strtrim.c					\
		$(LIB_PATH)ft_strsplit.c					\
		$(LIB_PATH)ft_itoa.c						\
		$(LIB_PATH)ft_putchar.c				\
		$(LIB_PATH)ft_putstr.c					\
		$(LIB_PATH)ft_putendl.c				\
		$(LIB_PATH)ft_putnbr.c					\
		$(LIB_PATH)ft_putchar_fd.c				\
		$(LIB_PATH)ft_putstr_fd.c				\
		$(LIB_PATH)ft_putendl_fd.c				\
		$(LIB_PATH)ft_putnbr_fd.c				\
		$(LIB_PATH)ft_lstnew.c					\
		$(LIB_PATH)ft_lstdelone.c				\
		$(LIB_PATH)ft_lstdel.c					\
		$(LIB_PATH)ft_lstadd.c					\
		$(LIB_PATH)ft_lstiter.c				\
		$(LIB_PATH)ft_lstmap.c					\
		$(LIB_PATH)ft_printlist.c				\
		$(LIB_PATH)ft_ispositive.c				\
		$(LIB_PATH)ft_abs.c					\
		$(LIB_PATH)ft_strrev.c					\
		$(LIB_PATH)ft_lstaddend.c				\
		$(LIB_PATH)ft_lstlen.c					\
		$(LIB_PATH)ft_print_words_tab.c			\
		$(LIB_PATH)ft_swap.c						\
		$(LIB_PATH)ft_is_sort.c				\
		$(LIB_PATH)ft_sort_integer_table.c		\
		$(LIB_PATH)get_next_line.c				\
		$(LIB_PATH)ft_strjoin_free.c				\
		$(LIB_PATH)ft_cnt_rtrn.c					\
		$(LIB_PATH)ft_natoi.c				\
		$(LIB_PATH)ft_pwr.c						\
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
		ft_flt_operator.c				\

OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ_PATH = ./obj/
SRC_PATH = ./src/
LIB_PATH = ./../libft/

OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

AR = ar rc
CC = gcc

ifdef FLAGS
	ifeq ($(FLAGS), no)
		CFLAGS=
	endif
else
	CFLAGS	= -g -Wall -Wextra -Werror
endif

INCLUDE = -I ./
LIB = libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@ $(AR) $@ $(OBJ)
	@ ranlib $(NAME)
	@ echo "\x1B[32m--------------------> LIBFT.PRINTF PRETE <--------------------\n\x1B[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c ft_printf.h makefile
	@ mkdir $(OBJ_PATH) 2> /dev/null || true
	@ mkdir $(OBJ_PATH)$(LIB_PATH) 2> /dev/null || true
	@ $(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

val:
	@gcc -o val.out  $(CFLAGS) ../val_main.c $(NAME)

clean:
	@ rm -f $(OBJ)
	@ echo "\x1B[31m-----------------> LIBFT.PRINTF RANGEE (.O) <-----------------\x1B[0m\n"
	@ rmdir $(OBJ_PATH)$(LIB_PATH) 2> /dev/null || true
	@ rmdir $(OBJ_PATH) 2> /dev/null || true
	@ rm val.out 2> /dev/null || true
	@ rm a.out 2> /dev/null || true
	@ echo "\x1B[33m---------------> LIBFT.PRINTF ORGANISEE FILES <---------------\x1B[0m\n"

fclean: clean
	 @ rm -f $(NAME)
	 @ rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re
