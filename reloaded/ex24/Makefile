NAME = libft.a

SRC = ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c ft_putchar.c
INCLUDES = includes


PRE = ./srcs/
SRCS = ${addprefix ${PRE}, ${SRC}}

OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^ 

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
