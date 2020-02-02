# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 01:23:09 by fbertazz          #+#    #+#              #
#    Updated: 2019/12/29 19:48:15 by fbertazz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
FILES = ft_bzero.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putstr.c \
		ft_putnbr_fd.c \
		ft_putnbr.c \
		ft_isdigit.c \
		get_next_line.c \
		ft_strchr.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strsub.c \
		ft_memdel.c \
		ft_strlen.c \
		ft_strnew.c \
		ft_memset.c \
		ft_splitter.c \
		ft_strsplit.c \
		ft_count_letters.c \
		ft_count_words.c \
		ft_is_white_space.c \
		ft_atoi.c
OBJECTS = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(FILES) 
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
