# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 16:16:14 by lbuang            #+#    #+#              #
#    Updated: 2019/06/21 10:31:11 by lbuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -c

SOURCES = ./ft_isascii.c ./ft_strcat.c ./ft_strlen.c \
		  ./ft_atoi.c ./ft_isdigit.c ./ft_strchr.c	\
		  ./ft_tolower.c ./ft_isalnum.c	./ft_isprint.c	\
		  ./ft_strcmp.c ./ft_strncmp.c ./ft_toupper.c \
		  ./ft_isalpha.c ./ft_putchar.c ./ft_strcpy.c	\
		  ./ft_strncpy.c ./ft_memccpy.c ./ft_memcpy.c	\
		  ./ft_memset.c ./ft_memcmp.c ./ft_strlcat.c ./ft_strdup.c \
		  ./ft_bzero.c ./ft_memmove.c ./ft_memchr.c ./ft_putchar_fd.c ./ft_putstr_fd.c \
		  ./ft_putendl_fd.c ./ft_memalloc.c ./ft_memdel.c ./ft_strdel.c ./ft_strnew.c \
		  ./ft_strclr.c ./ft_striteri.c ./ft_striter.c ./ft_strmap.c ./ft_strmapi.c	\
		  ./ft_strequ.c ./ft_putnbr.c ./ft_putnbr_fd.c ./ft_putstr.c ./ft_strnequ.c	\
		  ./ft_strsub.c ./ft_strjoin.c ./ft_putendl.c ./ft_strstr.c ./ft_strrchr.c	\
		  ./ft_strncat.c ./ft_strnstr.c ./ft_strtrim.c ./ft_whitespace.c ./ft_itoa.c \
		 ./ft_strsplit.c 

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
