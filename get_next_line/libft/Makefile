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
NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_isspace.c ft_itoa.c ft_lstadd.c \
	ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
	ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memdel.c ft_memmove.c ft_memset.c ft_pow.c ft_putchar_fd.c \
	ft_putchar.c ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c \
	ft_putstr_fd.c ft_putstr.c ft_realloc.c ft_sqrt.c ft_strcat.c \
	ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
	ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
	ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
	ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c \
	ft_strrchr.c ft_strrev.c ft_strsplit.c ft_strstr.c ft_strsub.c \
	ft_strtrim.c ft_swap.c ft_tolower.c ft_toupper.c
OBJ = $(SRCS:.c=.o)
INC = -I includes

all: $(NAME)

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

ft_atoi.o: ft_atoi.c
	$(CC) $(CFLAGS) -c ft_atoi.c -o ft_atoi.o

ft_bzero.o: ft_bzero.c
	$(CC) $(CFLAGS) -c ft_bzero.c -o ft_bzero.o

ft_isalnum.o: ft_isalnum.c
	$(CC) $(CFLAGS) -c ft_isalnum.c -o ft_isalnum.o

ft_isalpha.o: ft_isalpha.c
	$(CC) $(CFLAGS) -c ft_isalpha.c -o ft_isalpha.o

ft_isascii.o: ft_isascii.c
	$(CC) $(CFLAGS) -c ft_isascii.c -o ft_isascii.o

ft_isdigit.o: ft_isdigit.c
	$(CC) $(CFLAGS) -c ft_isdigit.c -o ft_isdigit.o

ft_isprint.o: ft_isprint.c
	$(CC) $(CFLAGS) -c ft_isprint.c -o ft_isprint.o

ft_isspace.o: ft_isspace.c
	$(CC) $(CFLAGS) -c ft_isspace.c -o ft_isspace.o

ft_itoa.o: ft_itoa.c
	$(CC) $(CFLAGS) -c ft_itoa.c -o ft_itoa.o $(INC)

ft_lstadd.o: ft_lstadd.c
	$(CC) $(CFLAGS) -c ft_lstadd.c -o ft_lstadd.o $(INC)

ft_lstdel.o: ft_lstdel.c
	$(CC) $(CFLAGS) -c ft_lstdel.c -o ft_lstdel.o $(INC)

ft_lstdelone.o: ft_lstdelone.c
	$(CC) $(CFLAGS) -c ft_lstdelone.c -o ft_lstdelone.o $(INC)

ft_lstiter.o: ft_lstiter.c
	$(CC) $(CFLAGS) -c ft_lstiter.c -o ft_lstiter.o $(INC)

ft_lstmap.o: ft_lstmap.c
	$(CC) $(CFLAGS) -c ft_lstmap.c -o ft_lstmap.o $(INC)

ft_lstnew.o: ft_lstnew.c
	$(CC) $(CFLAGS) -c ft_lstnew.c -o ft_lstnew.o $(INC)

ft_memalloc.o: ft_memalloc.c
	$(CC) $(CFLAGS) -c ft_memalloc.c -o ft_memalloc.o

ft_memccpy.o: ft_memccpy.c
	$(CC) $(CFLAGS) -c ft_memccpy.c -o ft_memccpy.o

ft_memchr.o: ft_memchr.c
	$(CC) $(CFLAGS) -c ft_memchr.c -o ft_memchr.o

ft_memcmp.o: ft_memcmp.c
	$(CC) $(CFLAGS) -c ft_memcmp.c -o ft_memcmp.o

ft_memcpy.o: ft_memcpy.c
	$(CC) $(CFLAGS) -c ft_memcpy.c -o ft_memcpy.o

ft_memdel.o: ft_memdel.c
	$(CC) $(CFLAGS) -c ft_memdel.c -o ft_memdel.o

ft_memmove.o: ft_memmove.c
	$(CC) $(CFLAGS) -c ft_memmove.c -o ft_memmove.o

ft_memset.o: ft_memset.c
	$(CC) $(CFLAGS) -c ft_memset.c -o ft_memset.o

ft_pow.o: ft_pow.c
	$(CC) $(CFLAGS) -c ft_pow.c -o ft_pow.o

ft_putchar_fd.o: ft_putchar_fd.c
	$(CC) $(CFLAGS) -c ft_putchar_fd.c -o ft_putchar_fd.o

ft_putchar.o: ft_putchar.c
	$(CC) $(CFLAGS) -c ft_putchar.c -o ft_putchar.o

ft_putendl_fd.o: ft_putendl_fd.c
	$(CC) $(CFLAGS) -c ft_putendl_fd.c -o ft_putendl_fd.o

ft_putendl.o: ft_putendl.c
	$(CC) $(CFLAGS) -c ft_putendl.c -o ft_putendl.o

ft_putnbr_fd.o: ft_putnbr_fd.c
	$(CC) $(CFLAGS) -c ft_putnbr_fd.c -o ft_putnbr_fd.o

ft_putnbr.o: ft_putnbr.c
	$(CC) $(CFLAGS) -c ft_putnbr.c -o ft_putnbr.o

ft_putstr_fd.o: ft_putstr_fd.c
	$(CC) $(CFLAGS) -c ft_putstr_fd.c -o ft_putstr_fd.o

ft_putstr.o: ft_putstr.c
	$(CC) $(CFLAGS) -c ft_putstr.c -o ft_putstr.o

ft_realloc.o: ft_realloc.c
	$(CC) $(CFLAGS) -c ft_realloc.c -o ft_realloc.o

ft_sqrt.o: ft_sqrt.c
	$(CC) $(CFLAGS) -c ft_sqrt.c -o ft_sqrt.o

ft_strcat.o: ft_strcat.c
	$(CC) $(CFLAGS) -c ft_strcat.c -o ft_strcat.o

ft_strchr.o: ft_strchr.c
	$(CC) $(CFLAGS) -c ft_strchr.c -o ft_strchr.o

ft_strclr.o: ft_strclr.c
	$(CC) $(CFLAGS) -c ft_strclr.c -o ft_strclr.o

ft_strcmp.o: ft_strcmp.c
	$(CC) $(CFLAGS) -c ft_strcmp.c -o ft_strcmp.o

ft_strcpy.o: ft_strcpy.c
	$(CC) $(CFLAGS) -c ft_strcpy.c -o ft_strcpy.o

ft_strdel.o: ft_strdel.c
	$(CC) $(CFLAGS) -c ft_strdel.c -o ft_strdel.o

ft_strdup.o: ft_strdup.c
	$(CC) $(CFLAGS) -c ft_strdup.c -o ft_strdup.o

ft_strequ.o: ft_strequ.c
	$(CC) $(CFLAGS) -c ft_strequ.c -o ft_strequ.o

ft_striter.o: ft_striter.c
	$(CC) $(CFLAGS) -c ft_striter.c -o ft_striter.o

ft_striteri.o: ft_striteri.c
	$(CC) $(CFLAGS) -c ft_striteri.c -o ft_striteri.o

ft_strjoin.o: ft_strjoin.c
	$(CC) $(CFLAGS) -c ft_strjoin.c -o ft_strjoin.o

ft_strlcat.o: ft_strlcat.c
	$(CC) $(CFLAGS) -c ft_strlcat.c -o ft_strlcat.o

ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) -c ft_strlen.c -o ft_strlen.o

ft_strmap.o: ft_strmap.c
	$(CC) $(CFLAGS) -c ft_strmap.c -o ft_strmap.o

ft_strmapi.o: ft_strmapi.c
	$(CC) $(CFLAGS) -c ft_strmapi.c -o ft_strmapi.o

ft_strncat.o: ft_strncat.c
	$(CC) $(CFLAGS) -c ft_strncat.c -o ft_strncat.o

ft_strncmp.o: ft_strncmp.c
	$(CC) $(CFLAGS) -c ft_strncmp.c -o ft_strncmp.o

ft_strncpy.o: ft_strncpy.c
	$(CC) $(CFLAGS) -c ft_strncpy.c -o ft_strncpy.o

ft_strnequ.o: ft_strnequ.c
	$(CC) $(CFLAGS) -c ft_strnequ.c -o ft_strnequ.o

ft_strnew.o: ft_strnew.c
	$(CC) $(CFLAGS) -c ft_strnew.c -o ft_strnew.o

ft_strnstr.o: ft_strnstr.c
	$(CC) $(CFLAGS) -c ft_strnstr.c -o ft_strnstr.o

ft_strrchr.o: ft_strrchr.c
	$(CC) $(CFLAGS) -c ft_strrchr.c -o ft_strrchr.o

ft_strrev.o: ft_strrev.c
	$(CC) $(CFLAGS) -c ft_strrev.c -o ft_strrev.o

ft_strsplit.o: ft_strsplit.c
	$(CC) $(CFLAGS) -c ft_strsplit.c -o ft_strsplit.o

ft_strstr.o: ft_strstr.c
	$(CC) $(CFLAGS) -c ft_strstr.c -o ft_strstr.o

ft_strsub.o: ft_strsub.c
	$(CC) $(CFLAGS) -c ft_strsub.c -o ft_strsub.o

ft_strtrim.o: ft_strtrim.c
	$(CC) $(CFLAGS) -c ft_strtrim.c -o ft_strtrim.o

ft_swap.o: ft_swap.c
	$(CC) $(CFLAGS) -c ft_swap.c -o ft_swap.o

ft_tolower.o: ft_tolower.c
	$(CC) $(CFLAGS) -c ft_tolower.c -o ft_tolower.o

ft_toupper.o: ft_toupper.c
	$(CC) $(CFLAGS) -c ft_toupper.c -o ft_toupper.o
