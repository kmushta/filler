# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmushta <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/11 14:13:31 by kmushta           #+#    #+#              #
#    Updated: 2018/02/11 14:13:33 by kmushta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = kmushta.filler
SRC = ft_dirs.c ft_manh.c ft_map.c ft_readers.c ft_sp.c ft_utils.c \
	kmushta.filler.c
OBJ = $(SRC:.c=.o)
GNL = get_next_line/get_next_line.a
GNL_SRC = get_next_line/get_next_line.c
GNL_OBJ = get_next_line/get_next_line.o
GNL_HEAD = get_next_line/get_next_line.h

all: $(GNL) $(NAME)

$(NAME): $(OBJ)
	make -C ft_printf
	gcc -o $(NAME) $(OBJ) -L. ft_printf/libftprintf.a \
	-L. get_next_line/get_next_line.a -L. get_next_line/libft/libft.a

$(GNL): $(GNL_OBJ)
	ar rc $(GNL) $(GNL_OBJ)
	ranlib $(GNL)

clean:
	make clean -C ft_printf
	make clean -C get_next_line/libft
	rm -rf $(OBJ)
	rm -rf $(GNL_OBJ)

fclean: clean
	make fclean -C ft_printf
	make fclean -C get_next_line/libft
	rm -rf $(NAME)
	rm -rf $(GNL)

re: fclean all

$(GNL_OBJ): $(GNL_SRC) $(GNL_HEAD)
	make -C get_next_line/libft
	gcc $(CFLAGS) -c $(GNL_SRC) -I get_next_line \
	-I get_next_line/libft/includes -o $(GNL_OBJ)

ft_dirs.o: ft_dirs.c kmushta.filler.h
	gcc $(CFLAGS) -c ft_dirs.c -o ft_dirs.o -I ft_printf

ft_manh.o: ft_manh.c kmushta.filler.h
	gcc $(CFLAGS) -c ft_manh.c -o ft_manh.o

ft_map.o: ft_map.c kmushta.filler.h
	gcc $(CFLAGS) -c ft_map.c -o ft_map.o

ft_readers.o: ft_readers.c kmushta.filler.h
	gcc $(CFLAGS) -c ft_readers.c -o ft_readers.o -I get_next_line \
	-I ft_printf -I get_next_line/libft/includes

ft_sp.o: ft_sp.c kmushta.filler.h
	gcc $(CFLAGS) -c ft_sp.c -o ft_sp.o

ft_utils.o: ft_utils.c
	gcc $(CFLAGS) -c ft_utils.c -o ft_utils.o

kmushta.filler.o: kmushta.filler.c kmushta.filler.h
	gcc $(CFLAGS) -c kmushta.filler.c -o kmushta.filler.o -I ft_printf
