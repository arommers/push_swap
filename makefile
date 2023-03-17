# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: adri <adri@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2023/03/15 13:22:32 by adri          #+#    #+#                  #
#    Updated: 2023/03/17 14:29:35 by arommers      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
INCLUDE = -I./include
SRC =	./src/initialize.c ./src/linked_list.c	\
		./src/miscellaneous.c ./src/push_swap.c	\
		./src/push.c ./src/r_rotate.c			\
		./src/rotate.c ./src/small_sort.c		\
		./src/swap.c
OBJ = $(SRC:.c=.o)

BOLD    := \033[1m./SRC/
RED     := \033[31;1m
GREEN   := \033[32;1m
YELLOW  := \033[33;1m
BLUE    := \033[34;1m
MAGENTA := \033[35;1m
CYAN    := \033[36;1m
WHITE   := \033[37;1m
RESET	= \x1b[0m

all: $(NAME)

$(NAME): $(OBJ) 
	@echo "Compiled with $(BLUE)$(CFLAGS)$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(BLUE)-------------------------------------------"
	@echo "	$(NAME) = NOW READY FOR USE!"
	@echo "-------------------------------------------$(RESET)"


%.o: %.c
	@echo "Compiled ✅ $(BLUE) $^ $(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $^

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN) $(NAME) $(RESET) Cleansed ✅"

re: fclean all

.PHONY: all clean fclean re
