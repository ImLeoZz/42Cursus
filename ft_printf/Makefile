NAME = libftprintf.a

SRC = ft_printf.c
INCLUDES = includes

PRE = ./srcs/

SRCS = ${addprefix ${PRE}, ${SRC}}
OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^ 

%.o: %.c Makefile
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

