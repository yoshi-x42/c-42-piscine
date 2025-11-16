# Name of the library
NAME = libft.a

# Source and object files
SRCS =	srcs/ft_putchar.c	\
        srcs/ft_swap.c 		\
        srcs/ft_putstr.c 	\
        srcs/ft_strlen.c	\
        srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)
	ar rc $(NAME) $(OBJS)

srcs/%.o = srcs/%.c
	$(CC) $(CFLAGS) - I includes -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# Rebuild everything from the start
# SAME AS ....
# make fclean 
# make all
re: fclean all

# PHONY tells make these are actions, not files
.PHONY: clean