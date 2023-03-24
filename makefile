# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adri <adri@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2023/03/15 13:22:32 by adri          #+#    #+#                  #
#    Updated: 2023/03/24 08:57:48 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = push_swap
LIBFT = ./libft/libft.a
INCLUDE = -I./include
SRC =	./src/initialize.c ./src/linked_list.c	\
		./src/miscellaneous.c ./src/push_swap.c	\
		./src/push.c ./src/r_rotate.c			\
		./src/rotate.c ./src/sorting.c			\
		./src/swap.c ./src/input_check.c		\
		./src/sort_util.c
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

BLACK   := \033[30m
RED     := \033[31m
GREEN   := \033[32m
YELLOW  := \033[33m
BLUE 	:= \033[96m
MAGENTA := \033[38;5;206m
CYAN    := \033[36m
WHITE   := \033[37m
RESET   := \033[0m
BOLD    := \033[1m
DIM     := \033[2m
ITALIC  := \033[3m
UNDER   := \033[4m
BLINK   := \033[5m
REVERSE := \033[7m
HIDDEN  := \033[8m
PINK 	:= \033[35m

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ) 
	@echo "Compiled with $(BLUE)$(BOLD)$(CFLAGS)$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)
	@echo "$(PINK)$(BOLD)----------------------------------------"
	@echo "     $(NAME) = NOW READY FOR USE!"
	@echo "----------------------------------------$(RESET)"

$(LIBFT):
	@$(MAKE) -C ./libft

$(OBJ_DIR)/%.o: ./src/%.c
	@mkdir -p $(OBJ_DIR)
	@echo "Compiled ✅ $(PINK) $(BOLD) $^ $(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $^

clean:
	@$(MAKE) clean -C ./libft
	@rm -rf $(OBJ_DIR)
	@rm -f $(OBJ)

fclean: clean
	@$(MAKE) fclean -C ./libft
	@rm -f $(NAME)
	@echo "$(BLUE) $(BOLD)$(NAME) $(RESET) Cleansed ✅"

re: fclean all

.PHONY: all clean fclean re
