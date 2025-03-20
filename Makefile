CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC  = ./Mandatory/src/main.c \
		./Mandatory/src/initialize.c  \
		./Mandatory/src/utils_1.c \
		./Mandatory/sorts/sort_under_3.c \
		./Mandatory/sorts/sort_3_to_5.c \
		./Mandatory/sorts/sort_over_5.c \
		./Mandatory/moves/swap.c \
		./Mandatory/moves/rotate.c \
		./Mandatory/moves/r_rotate.c \
		./Mandatory/moves/push.c \

OBJC = $(SRC:.c=.o)

B_SRC  = ./Bonus/src/main.c \
		./Bonus/src/initialize.c  \
		./Bonus/src/utils_1.c \
		./Bonus/src/check.c \
		./Bonus/moves/swap.c \
		./Bonus/moves/rotate.c \
		./Bonus/moves/r_rotate.c \
		./Bonus/moves/push.c \

B_OBJC = $(B_SRC:.c=.o)

libft_D = ./42_Libft
libft = $(libft_D)/libft.a

NAME= push_swap

B_NAME= checker

all: $(NAME)

$(NAME): $(OBJC) 
	make -C $(libft_D)
	$(CC) $(CFLAGS)  $(OBJC) -o $(NAME) $(libft)


$(OBJC): %.o: %.c ./Mandatory/main.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus:$(B_NAME)

$(B_NAME): $(B_OBJC)
	make -C $(libft_D)
	$(CC) $(CFLAGS)  $(B_OBJC) -o $(B_NAME) $(libft)

$(B_OBJC): %.o: %.c ./Bonus/main.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(libft_D) clean
	rm -rf $(OBJC)
	rm -rf $(B_OBJC)

fclean: clean
	make -C $(libft_D) fclean
	rm -rf $(NAME)
	rm -rf $(B_NAME)

re: fclean all

.PHONY: all bonus clean fclean re
