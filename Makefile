# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/29 17:36:43 by fbertazz          #+#    #+#              #
#    Updated: 2020/01/06 18:54:19 by fbertazz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./includes/
LIBFT_DIR = ./libft/
MINLBX_DIR = ./minilibx_macos/

SRC_FILES = main.c input.c map.c draw.c aux.c camera.c color.c
OBJ_FILES = $(SRC_FILES:.c=.o)

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
LIBFT = $(addprefix $(LIBFT_DIR), libft.a)
MINLBX	= $(addprefix $(MINLBX_DIR), libmlx.a)

LIBRARIES  = $(LIBFT) -L $(MINLBX_DIR) -lmlx -framework OpenGL -framework AppKit

all: obj $(LIBFT) $(MINLBX) $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)
$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	@gcc $(CFLAGS) -I $(MINLBX_DIR) -I $(LIBFT_DIR) -I $(INC_DIR) -o $@ -c $<
$(LIBFT):
	@make -C $(LIBFT_DIR)
$(MINLBX):
	@make -C $(MINLBX_DIR)

$(NAME): $(OBJ)
	@gcc $(OBJ) $(LIBRARIES) -lm -o $(NAME)

clean:
	@rm -Rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean
	@make -C $(MINLBX_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

debug: CFLAGS += -g
debug: re
