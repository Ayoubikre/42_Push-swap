CC = cc
CFLAGS = -Wall -Werror -Wextra
# CFLAGS = -fsanitize=address -g 

SRC  = ./Mandatory/src/main.c \
		./Mandatory/src/initialize.c  \
		./Mandatory/src/sort.c \
		./Mandatory/src/utils_1.c \
		./Mandatory/moves/swap.c \
		./Mandatory/moves/shift_up.c \
		./Mandatory/moves/shift_dw.c \
		./Mandatory/moves/push.c \

# SRC = a.c ./Mandatory/src/initialize.c ./Mandatory/src/utils_1.c ./Mandatory/src/moves.c

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
