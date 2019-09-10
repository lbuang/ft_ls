# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 11:05:38 by lbuang            #+#    #+#              #
#    Updated: 2019/09/10 13:22:28 by lbuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls.a

FLAGS = -c -Wall -Wextra -Werror

SRCS = ./src/*.c

OBJS = $(SRCS: .c=.o)

all : $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean: rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
