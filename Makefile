# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbuang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/10 11:05:38 by lbuang            #+#    #+#              #
#    Updated: 2019/09/16 14:13:05 by lbuang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls


FLAGS = -g -Wall -Wextra -Werror -I includes						# the rule for building ls

SRCS = srcs/main.c \
			src/printcolor.c \
			src/checks.c \
			src/flags.c \
			src/path.c \
			src/print.c \
			src/printpermissions.c \
			src/lg_r.c \
			src/lists.c \
			src/ft_list_swap.c \
			src/sort.c \
			src/selected.c \
			src/block.c \
			src/access.c \
			src/modification.c \
			src/free.c \
			src/exit.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME):  $(OBJS)
	@make -C libft
	gcc $(FLAGS) $(SRCS) -I libft/libft.h libft/libft.a
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
