CC = cc
# CFLAGS = -Wall -Werror -Wextra
CFLAGS = -Wall

SRC = a.c
OBJC = $(SRC:.c=.o)

checker_m= ./checker_Mac
checker_l= ./checker_linux

libft_D = ./42_Libft
libft = $(libft_D)/libft.a

NAME= push_swap

all: $(NAME) clean

$(NAME): $(OBJC) 
#	make -C $(libft_D)
	$(CC) $(CFLAGS)  $(OBJC) -o $(NAME) $(libft) && echo "\n--------------------\n" && ./$(NAME) 1 2 3         && echo "\n"
#	$(CC) $(CFLAGS)  $(OBJC) -o $(NAME) $(libft) && echo "\n--------------------\n" && ./$(NAME) 1 2 && echo "\n" | $(checker_m) 1 2

%.o: %.c ./main.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
#	make -C $(libft_D) clean
	@rm -rf $(OBJC)

fclean: clean
#	make -C $(libft_D) fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
