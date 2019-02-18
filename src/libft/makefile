# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 09:11:52 by morgani           #+#    #+#              #
#    Updated: 2019/02/04 17:09:32 by vlecoq-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
AR = ar rc

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_memset.c					\
		ft_bzero.c					\
		ft_memcpy.c					\
		ft_memccpy.c				\
		ft_memmove.c				\
		ft_memchr.c					\
		ft_memcmp.c					\
		ft_strlen.c					\
		ft_strdup.c					\
		ft_strcpy.c					\
		ft_strncpy.c				\
		ft_strcat.c					\
		ft_strncat.c				\
		ft_strlcat.c				\
		ft_strchr.c					\
		ft_strrchr.c				\
		ft_strstr.c					\
		ft_strnstr.c				\
		ft_strcmp.c					\
		ft_strncmp.c				\
		ft_atoi.c					\
		ft_isalpha.c				\
		ft_isdigit.c				\
		ft_isalnum.c				\
		ft_isascii.c				\
		ft_isprint.c				\
		ft_toupper.c				\
		ft_tolower.c				\
		ft_memalloc.c				\
		ft_memdel.c					\
		ft_strnew.c					\
		ft_strdel.c					\
		ft_strclr.c					\
		ft_striter.c				\
		ft_striteri.c				\
		ft_strmap.c					\
		ft_strmapi.c				\
		ft_strequ.c					\
		ft_strnequ.c				\
		ft_strsub.c					\
		ft_strjoin.c				\
		ft_strtrim.c				\
		ft_strsplit.c				\
		ft_itoa.c					\
		ft_putchar.c				\
		ft_putstr.c					\
		ft_putendl.c				\
		ft_putnbr.c					\
		ft_putchar_fd.c				\
		ft_putstr_fd.c				\
		ft_putendl_fd.c				\
		ft_putnbr_fd.c				\
		ft_lstnew.c					\
		ft_lstdelone.c				\
		ft_lstdel.c					\
		ft_lstadd.c					\
		ft_lstiter.c				\
		ft_lstmap.c					\
		ft_printlist.c				\
		ft_ispositive.c				\
		ft_abs.c					\
		ft_strrev.c					\
		ft_lstaddend.c				\
		ft_lstlen.c					\
		ft_print_words_tab.c		\
		ft_swap.c					\
		ft_is_sort.c				\
		ft_sort_integer_table.c		\
		get_next_line.c				\
		ft_strjoin_free.c			\
		ft_cnt_rtrn.c				\
		ft_natoi.c					\
		ft_pwr.c

OBJ = $(SRC:.c=.o)
PATH_OBJ = ./
PATH_SRC = ./

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@ ranlib $(NAME)
	@ echo "---------------> LIBFT PRETE <---------------"

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@ rm -f $(OBJ)
	@ echo "---------------> LIBFT RANGEE(.O) <---------------"

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
