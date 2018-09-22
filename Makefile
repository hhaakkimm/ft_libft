# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdrakh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/16 14:02:05 by aabdrakh          #+#    #+#              #
#    Updated: 2018/09/16 16:37:50 by aabdrakh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = src/*.c src2/*.c src3/*.c

OBJECTS = *.o

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(SRCS) libft.h
	gcc -c -Wall -Wextra -Werror $(SRCS) -I $(INCLUDE)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
