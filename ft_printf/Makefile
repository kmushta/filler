# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmushta <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 13:28:38 by kmushta           #+#    #+#              #
#    Updated: 2017/10/25 13:28:39 by kmushta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf_c.c ft_printf_d.c ft_printf_o.c ft_printf_p.c \
	ft_printf_readers.c ft_printf_s.c ft_printf_str_utils.c ft_printf_u.c \
	ft_printf_utils.c ft_printf_writers.c ft_printf_x.c ft_printf.c \
	ft_printf_wstr_utils.c ft_printf_putwchar.c
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

ft_printf_c.o: ft_printf_c.c
	$(CC) $(CFLAGS) -c ft_printf_c.c -o ft_printf_c.o

ft_printf_d.o: ft_printf_d.c
	$(CC) $(CFLAGS) -c ft_printf_d.c -o ft_printf_d.o

ft_printf_o.o: ft_printf_o.c
	$(CC) $(CFLAGS) -c ft_printf_o.c -o ft_printf_o.o

ft_printf_p.o: ft_printf_p.c
	$(CC) $(CFLAGS) -c ft_printf_p.c -o ft_printf_p.o

ft_printf_readers.o: ft_printf_readers.c
	$(CC) $(CFLAGS) -c ft_printf_readers.c -o ft_printf_readers.o

ft_printf_s.o: ft_printf_s.c
	$(CC) $(CFLAGS) -c ft_printf_s.c -o ft_printf_s.o

ft_printf_str_utils.o: ft_printf_str_utils.c
	$(CC) $(CFLAGS) -c ft_printf_str_utils.c -o ft_printf_str_utils.o

ft_printf_u.o: ft_printf_u.c
	$(CC) $(CFLAGS) -c ft_printf_u.c -o ft_printf_u.o

ft_printf_utils.o: ft_printf_utils.c
	$(CC) $(CFLAGS) -c ft_printf_utils.c -o ft_printf_utils.o

ft_printf_writers.o: ft_printf_writers.c
	$(CC) $(CFLAGS) -c ft_printf_writers.c -o ft_printf_writers.o

ft_printf_x.o: ft_printf_x.c
	$(CC) $(CFLAGS) -c ft_printf_x.c -o ft_printf_x.o

ft_printf.o: ft_printf.c
	$(CC) $(CFLAGS) -c ft_printf.c -o ft_printf.o

ft_printf_wstr_utils.o: ft_printf_wstr_utils.c
	$(CC) $(CFLAGS) -c ft_printf_wstr_utils.c -o ft_printf_wstr_utils.o

ft_printf_putwchar.o: ft_printf_putwchar.c
	$(CC) $(CFLAGS) -c ft_printf_putwchar.c -o ft_printf_putwchar.o