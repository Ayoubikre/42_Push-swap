CC = cc
# CFLAGS = -Wall -Werror -Wextra
# CFLAGS = -fsanitize=address -g 

SRC = ./Mandatory/src/main.c ./Mandatory/src/initialize.c
# SRC = a.c ./Mandatory/src/initialize.c
OBJC = $(SRC:.c=.o)

checker_m= ./checker_Mac
checker_l= ./checker_linux

libft_D = ./42_Libft
libft = $(libft_D)/libft.a

NAME= push_swap

all: $(NAME) clean

$(NAME): $(OBJC) 
#	make -C $(libft_D)
	$(CC) $(CFLAGS)  $(OBJC) -o $(NAME) $(libft)

%.o: %.c ./Mandatory/src/main.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
#	make -C $(libft_D) clean
	@rm -rf $(OBJC)

fclean: clean
#	make -C $(libft_D) fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
