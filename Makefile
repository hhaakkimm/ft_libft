# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdrakh <aabdrakh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/16 14:02:05 by aabdrakh          #+#    #+#              #
#    Updated: 2019/06/20 15:28:00 by aabdrakh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/ft_atoi.c src/ft_lstmap.c src/ft_putendl.c src/ft_strdup.c src/ft_strnequ.c	
SRC += src/ft_bzero.c src/ft_lstnew.c src/ft_putendl_fd.c src/ft_strequ.c src/ft_strnew.c	
SRC += src/ft_isalnum.c src/ft_memalloc.c src/ft_putnbr.c src/ft_striter.c src/ft_strnstr.c		
SRC += src/ft_isalpha.c src/ft_memccpy.c src/ft_putnbr_fd.c src/ft_striteri.c src/ft_strrchr.c	
SRC += src/ft_isascii.c src/ft_memchr.c src/ft_putstr.c src/ft_strjoin.c src/ft_strsplit.c	
SRC += src/ft_isdigit.c src/ft_memcmp.c src/ft_putstr_fd.c src/ft_strlcat.c src/ft_strstr.c	
SRC += src/ft_isprint.c src/ft_memcpy.c src/ft_strcat.c src/ft_strlen.c src/ft_strsub.c	
SRC += src/ft_itoa.c src/ft_memdel.c src/ft_strchr.c src/ft_strmap.c src/ft_strtrim.c	
SRC += src/ft_lstadd.c src/ft_memmove.c src/ft_strclr.c src/ft_strmapi.c src/ft_tolower.c	
SRC += src/ft_lstdel.c src/ft_memset.c src/ft_strcmp.c src/ft_strncat.c src/ft_toupper.c	
SRC += src/ft_lstdelone.c src/ft_putchar.c src/ft_strcpy.c src/ft_strncmp.c	
SRC += src/ft_lstiter.c src/ft_putchar_fd.c src/ft_strdel.c src/ft_strncpy.c

OBJECTS = *.o

INCLUDE = libft.h

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC) -I $(INCLUDE)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
